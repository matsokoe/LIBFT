#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ISDIGIT : ");
	if ((check_num(ft_isdigit(48), isdigit(48), 1)) == 0)
	{
		printf("ft_isdigit = %d\n", ft_isdigit(48));
		printf("isdigit = %d\n", isdigit(48));
	}
	if ((check_num(ft_isdigit(57), isdigit(57), 2)) == 0)
	{
		printf("ft_isdigit = %d\n", ft_isdigit(57));
		printf("isdigit = %d\n", isdigit(57));
	}
	if ((check_num(ft_isdigit(52), isdigit(52), 3)) == 0)
	{
		printf("ft_isdigit = %d\n", ft_isdigit(52));
		printf("isdigit = %d\n", isdigit(52));
	}
	if ((check_num(ft_isdigit(32), isdigit(32), 4)) == 0)
	{
		printf("ft_isdigit = %d\n", ft_isdigit(32));
		printf("isdigit = %d\n", isdigit(32));
	}
	printf("\n");
	return (0);
}
