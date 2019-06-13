#include "../libft.h"
#include "test.h"

int main()
{
	const char *ss = "coucou le char miaou";
	printf("FT_STRRCHR : ");
	if ((check(ft_strchr(ss, 97), strchr(ss, 97), 1)) == 0)
	{
		printf("\nft_strrchr = %s\n", ft_strrchr(ss, 97));
		printf("\nstrrchr = %s\n", strrchr(ss, 97));
	}

	if (ft_strrchr(ss, 61) == strrchr(ss, 61))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strrchr = %s\n", ft_strrchr(ss, 61));
		printf("\nstrrchr = %s\n", strrchr(ss, 61));
	}
	printf("\n");
	return (0);
}
