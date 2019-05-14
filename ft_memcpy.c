/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:34:16 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/14 09:43:38 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *buf_dst;
	unsigned char *buf_src;
	size_t i;

	buf_dst = dst;
	buf_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		buf_dst[i] = buf_src[i];
		i++;
	}
	return (buf_dst);
}

int 	main()
{
	char src1[] = "Plus que toi";
	char dst1[50]= "A defaut de pouvoir";
	char src2[] = "Beaucoup";
	char dst2[50]= "peu";
	char src3[] = "allons";
	char dst3[50]= "";
	char src4[] = "";
	char dst4[50]= "allons";
	char src5[] = "\t\n\r\v\f";
	char dst5[50]= "bouhhhh";
	char src6[] = "Hello World!";
	char dst6[50] = "Hello World!";
	char src7[] = "Coucou!";
	char dst7[] = "\t\n\r\v\f";
	char src1a[] = "Plus que toi";
	char dst1a[50]= "A defaut de pouvoir";
	char src2a[] = "Beaucoup";
	char dst2a[50]= "peu";
	char src3a[] = "allons";
	char dst3a[50]= "";
	char src4a[] = "";
	char dst4a[50]= "allons";
	char src5a[] = "\t\n\r\v\f";
	char dst5a[50]= "bouhhhh";
	char src6a[] = "Hello World!";
	char dst6a[50] = "Hello World!";
	char src7a[] = "Coucou!";
	char dst7a[50] = "\t\n\r\v\f";
	printf("-----------------------TEST1----------------------\n");
	printf("%s\n", ft_memcpy(dst1, src1, 4));
	printf("%s\n", memcpy(dst1a, src1a, 4));
	printf("-----------------------TEST2----------------------\n");
	printf("%s\n", ft_memcpy(dst2, src2, 3));
	printf("%s\n", memcpy(dst2a, src2a, 3));
	printf("-----------------------TEST3----------------------\n");
	printf("%s\n", ft_memcpy(dst3, src3, 10));
	printf("%s\n", memcpy(dst3a, src3a, 10));
	printf("-----------------------TEST4----------------------\n");
	printf("%s\n", ft_memcpy(dst4, src4, 0));
	printf("%s\n", memcpy(dst4a, src4a, 0));
	printf("-----------------------TEST5----------------------\n");
	printf("%s\n", ft_memcpy(dst5, src5, 0));
	printf("%s\n", memcpy(dst5a, src5a, 0));
	printf("-----------------------TEST6----------------------\n");
	printf("%s\n", ft_memcpy(dst6, src6, 12));
	printf("%s\n", memcpy(dst6a, src6a, 12));
	printf("-----------------------TEST7----------------------\n");
	printf("%s\n", ft_memcpy(dst7, src7, 0));
	printf("%s\n", memcpy(dst7a, src7a, 0));
	return (0);
}

