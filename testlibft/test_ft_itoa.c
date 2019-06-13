#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ITOA : ");
	if (check(ft_itoa(-623), "-623", 1) == 0)
		printf("\n%s\n", ft_itoa(-623));

	if (check(ft_itoa(12345678), "12345678", 1) == 0)
		printf("\n%s\n", ft_itoa(12345678));

	if (check(ft_itoa(-1234567), "-1234567", 1) == 0)
		printf("\n%s\n", ft_itoa(-1234567));

	if (check(ft_itoa(-2147483648), "-2147483648", 1) == 0)
		printf("\n%s\n", ft_itoa(-2147483648));

	if (check(ft_itoa(2147483647), "2147483647", 1) == 0)
		printf("\n%s\n", ft_itoa(2147483647));

	printf("\n");
	return (0);
}
