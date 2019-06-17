#include "../libft.h"
#include "test.h"

int main()
{
	const char *s1 = "coucou", *s2 = "coutaratata";
	printf("FT_STRNEQU : ");
	if (ft_strnequ(s1, s2, 3) == 1)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strnequ = %d\n", ft_strnequ(s1, s2, 3));
	}

	if (ft_strnequ(s1, s2, 5) == 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strnequ = %d\n", ft_strnequ(s1, s2, 5));
	}
	printf("\n");
	return (0);
}
