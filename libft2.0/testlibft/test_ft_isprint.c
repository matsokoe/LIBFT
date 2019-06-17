#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ISPRINT : ");
	if ((check_num(ft_isprint(32), isprint(32), 1)) == 0)
	{
		printf("ft_isprint = %d\n", ft_isprint(32));
		printf("isprint = %d\n", isprint(32));
	}
	if ((check_num(ft_isprint(126), isprint(126), 2)) == 0)
	{
		printf("ft_isprint = %d\n", ft_isprint(126));
		printf("isprint = %d\n", isprint(126));
	}
	if ((check_num(ft_isprint(26), isprint(26), 3)) == 0)
	{
		printf("ft_isprint = %d\n", ft_isprint(26));
		printf("isprint = %d\n", isprint(26));
	}
	printf("\n");
	return (0);
}
