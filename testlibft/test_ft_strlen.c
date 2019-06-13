#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRLEN : ");
	if ((check_num((size_t)ft_strlen("coucou"), (size_t)strlen("coucou"), 1)) == 0)
	{
		printf("ft_strlen = %lu\n", ft_strlen("coucou"));
		printf("strlen = %lu\n", strlen("coucou"));
	}
	printf("\n");
	return (0);
}
