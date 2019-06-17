#include "../libft.h"
#include "test.h"

int main()
{
	const char *s1 = "coucou", *s2 = "coutaratata";
	printf("FT_STRNCMP ");
	// ---------------- TEST 1 -----------------
	if (ft_strncmp(s1, s2, 3) == strncmp(s1, s2, 3))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strncmp = %d\n", ft_strncmp(s1, s2, 3));
		printf("strncmp = %d\n", strncmp(s1,s2, 3));
	}
	// --------------- TEST 2 -------------------
	if (ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strncmp = %d\n", ft_strncmp(s1, s2, 5));
		printf("strncmp = %d\n", strncmp(s1,s2, 5));
	}
	// -------------- TEST 3 -----------------------
	if (ft_strncmp(s1, s2, 0) == strncmp(s1, s2, 0))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strncmp = %d\n", ft_strncmp(s1, s2, 0));
		printf("strncmp = %d\n", strncmp(s1,s2, 0));
	}

	printf("\n");
	return (0);
}
