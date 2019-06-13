#include "../libft.h"
#include "test.h"

int main()
{
	const char *s1 = "coucou", *s2 = "coutaratata";
	printf("FT_STREQU : ");
	if (ft_strequ(s1, s2) == 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strequ = %d\n", ft_strequ(s1, s2));
	}
	const char *test = "coucou";
	if (ft_strequ(s1, test) == 1)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strequ = %d\n", ft_strequ(s1, test));
	}
	printf("\n");
	return (0);
}
