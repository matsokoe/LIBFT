#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ISALNUM : ");
	if ((check_num(ft_isalnum(32), isalnum(32), 1)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(32));
		printf("isalnum = %d\n", isalnum(32));
	}
	if ((check_num(ft_isalnum(49), isalnum(49), 2)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(49));
		printf("isalnum = %d\n", isalnum(49));
	}
	if ((check_num(ft_isalnum(65), isalnum(65), 3)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(65));
		printf("isalnum = %d\n", isalnum(65));
	}
	if ((check_num(ft_isalnum(97), isalnum(97), 4)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(97));
		printf("isalnum = %d\n", isalnum(97));
	}
	if ((check_num(ft_isalnum(90), isalnum(90), 5)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(90));
		printf("isalnum = %d\n", isalnum(90));
	}
	if ((check_num(ft_isalnum(122), isalnum(122), 6)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(122));
		printf("isalnum = %d\n", isalnum(122));
	}
	if ((check_num(ft_isalnum(48), isalnum(48), 7)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(48));
		printf("isalnum = %d\n", isalnum(48));
	}
	if ((check_num(ft_isalnum(57), isalnum(57), 8)) == 0)
	{
		printf("ft_isalnum = %d\n", ft_isalnum(57));
		printf("isalnum = %d\n", isalnum(57));
	}
	printf("\n");
	return (0);
}
