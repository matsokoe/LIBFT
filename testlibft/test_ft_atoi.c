#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ATOI : ");

	if ((check_num(ft_atoi("  2147483647"), atoi("  2147483647"), 1)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("  2147483647"));
		printf("atoi = %d\n", atoi("  2147483647"));
	}

	if ((check_num(ft_atoi("  -2147483648"), atoi("  -2147483648"), 2)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("  -2147483648"));
		printf("atoi = %d\n", atoi("  -2147483648"));
	}

	if ((check_num(ft_atoi(" 1000000"), atoi(" 1000000"), 3)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi(" 1000000"));
		printf("atoi = %d\n", atoi(" 1000000"));
	}

	if ((check_num(ft_atoi(" d25"), atoi(" d25"), 4)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi(" d25"));
		printf("atoi = %d\n", atoi(" d25"));
	}

	if ((check_num(ft_atoi("+99"), atoi("+99"), 5)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("+99"));
		printf("atoi = %d\n", atoi("+99"));
	}

	if ((check_num(ft_atoi("-25"), atoi("-25"), 6)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("-25"));
		printf("atoi = %d\n", atoi("-25"));
	}

	if ((check_num(ft_atoi("-+25"), atoi("-+25"), 7)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("-+25"));
		printf("atoi = %d\n", atoi("-+25"));
	}

	if ((check_num(ft_atoi("-0"), atoi("-0"), 8)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("-0"));
		printf("atoi = %d\n", atoi("-0"));
	}
	if ((check_num(ft_atoi("21474836480"), atoi("21474836480"), 9)) == 0)
	{
		printf("ft_atoi = %d\n", ft_atoi("21474836480"));
		printf("atoi = %d\n", atoi("21474836480"));
	}
	printf("\n");
	return (0);
}
