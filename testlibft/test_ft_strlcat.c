#include "../libft.h"
#include "test.h"

int main()
{
	char a1[40] = "coucou ";
	char a2[40] = "coucou ";
	const char *add = "le chat, miaou";
	size_t m = 22;

	printf("FT_STRLCAT : ");

	if (ft_strlcat(a1, add, m) == strlcat(a2, add, m) && strcmp(a1, a2) == 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strlcat = %s\n", a1);
		printf("strlcat = %s\n", a2);
	}

	char b1[40] = "coucou ";
	char b2[40] = "coucou ";
	m = 10;

	if (ft_strlcat(b1, add, m) == strlcat(b2, add, m) && strcmp(b1, b2) == 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strlcat = %s\n", b1);
	 	printf("strlcat = %s\n", b2);
	}

	char c1[40] = "coucou ";
	char c2[40] = "coucou ";
	m = 7;

	if (ft_strlcat(c1, add, m) == strlcat(c2, add, m) && (strcmp(c1, c2) == 0))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strlcat = %s\n", c1);
	 	printf("strlcat = %s\n", c2);
	}

	char d1[40] = "coucou ";
	char d2[40] = "coucou ";
	m = 0;

	if (ft_strlcat(d1, add, m) == strlcat(d2, add, m) && (strcmp(d1, d2) == 0))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strlcat = %s\n", d1);
	 	printf("strlcat = %s\n", d2);
	}
	printf("\n");
	return (0);
}
