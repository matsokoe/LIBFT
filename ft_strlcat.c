/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:48 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/16 12:10:20 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*buf_src;
	size_t 	i;
	size_t	j;
	size_t	count;
	size_t	temp;

	if (src[0] == '\0' && dst[0] == '\0')
		return (0);
	if (dst[0] == '\0')
		return (ft_strlen(src));
	if (src[0] == '\0')
		return (size);
	buf_src = (char *)src;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	temp = i;
	while (buf_src[j] != '\0')
	{
		dst[i + j] = buf_src[j];
		j++;
	}
	count = 0;
	while (count < size && size <= temp)
	{
		dst[i] = '\0';
		i++;
		count++;
	}
	return (count + j);
}

int		main()
{

	char d1[50] = "POIUOWQEsdjfhdsjfh djh";
	char s1[20] = "";
	char d1a[50] = "POIUOWQEsdjfhdsjfh djh";
	char s1a[20] = "";
	char d2[50] = "      .. ";
	char s2[50] = "";
	char d2a[50] = "      .. ";
	char s2a[50] = "";
	char d3[50] = "dfdfds     5454 ";
	char s3[50] = "\t\n\r\v\f";
	char d3a[50] = "dfdfds     5454 ";
	char s3a[50] = "\t\n\r\v\f";
	char d4[50] = "";
	char s4[50] = "";
	char d4a[50] = "";
	char s4a[50] = "";
	char d5[50] = "\t\n\r\v\f";
	char s5[50] = "\t poi 77- ee\f";
	char d5a[50] = "\t\n\r\v\f";
	char s5a[50] = "\t poi 77- ee\f";
	char d6[50] = ";";
	char s6[50] = "..";
	char d6a[50] = ";";
	char s6a[50] = "..";
	char d7[50] = "\t poi 77- ee\f";
	char s7[10] = "LOL";
	char d7a[50] = "\t poi 77- ee\f";
	char s7a[10] = "LOL";
	char d8[90] = "oeiurpoii";
	char s8[50] = "poie jdksja ";
	char d8a[90] = "oeiurpoii";
	char s8a[50] = "poie jdksja ";
	char d9[50] = "iiiiiiiiiiiiiiiiiiiii";
	char s9[50] = "pour";
	char d9a[50] = "iiiiiiiiiiiiiiiiiiiii";
	char s9a[50] = "pour";
	char d10[50] = "";
	char s10[20] = "dddddddd";
	char d10a[50] = "";
	char s10a[20] = "dddddddd";

	printf("----------------------test1---------------------\n");
	printf("%lu\n", ft_strlcat(d1, s1, 2));
	printf("%lu\n", strlcat(d1a, s1a, 2));
	printf("----------------------test2---------------------\n");
	printf("%lu\n", ft_strlcat(d2, s2, 0));
	printf("%lu\n", strlcat(d2a, s2a, 0));
	printf("----------------------test3---------------------\n");
	printf("%lu\n", ft_strlcat(d3, s3, 3));
	printf("%lu\n", strlcat(d3a, s3a, 3));
	printf("----------------------test4---------------------\n");
	printf("%lu\n", ft_strlcat(d4, s4, 3));
	printf("%lu\n", strlcat(d4a, s4a, 3));
	printf("----------------------test5---------------------\n");
	printf("%lu\n", ft_strlcat(d5, s5, 6));
	printf("%lu\n", strlcat(d5a, s5a, 6));
	printf("----------------------test6---------------------\n");
	printf("%lu\n", ft_strlcat(d6, s6, 12));
	printf("%lu\n", strlcat(d6a, s6a, 12));
	printf("----------------------test7---------------------\n");
	printf("%lu\n", ft_strlcat(d7, s7, 0));
	printf("%lu\n", strlcat(d7a, s7a, 0));
	printf("----------------------test8---------------------\n");
	printf("%lu\n", ft_strlcat(d8, s8, 9));
	printf("%lu\n", strlcat(d8a, s8a, 9));
	printf("----------------------test9---------------------\n");
	printf("%lu\n", ft_strlcat(d9, s9, 2));
	printf("%lu\n", strlcat(d9a, s9a, 2));
	printf("----------------------test10---------------------\n");
	printf("%lu\n", ft_strlcat(d10, s10, 9));
	printf("%lu\n", strlcat(d10a, s10a, 9));
	return (0);
}
