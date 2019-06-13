#include "../libft.h"
#include "test.h"

int main()
{
	const char *ss = "coucou le chat miaou";
	printf("FT_STRCHR : ");
	if ((check(ft_strchr(ss, 97), strchr(ss, 97), 1)) == 0)
	{
		printf("ft_strchr = %s\n", ft_strchr(ss, 97));
		printf("strchr = %s\n", strchr(ss, 97));
	}
	if (ft_strchr(ss, 61) == strchr(ss, 61))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strchr = %s\n", ft_strchr(ss, 61));
		printf("strchr = %s\n", strchr(ss, 61));
	}
	printf("\n");
	return (0);
}
