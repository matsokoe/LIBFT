#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRDUP : ");
	const char *str = "manges des nouilles";
	if ((check(ft_strdup(str), strdup(str), 1)) == 0)
	{
		printf("ft_strdup = %s\n", ft_strdup(str));
		printf("strdup = %s\n", strdup(str));
	}
	printf("\n");
	return (0);
}
