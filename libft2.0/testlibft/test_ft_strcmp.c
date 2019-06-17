#include "../libft.h"
#include "test.h"

int main()
{
	const char *s1 = "coucou", *s2 = "coutaratata";
	printf("FT_STRCMP : ");
	if (ft_strcmp(s1, s2) == strcmp(s1, s2))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_strcmp = %d\n", ft_strcmp(s1, s2));
		printf("strcmp = %d\n", strcmp(s1,s2));
	}
	printf("\n");
	return (0);
}
