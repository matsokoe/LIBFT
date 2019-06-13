#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_ISALPHA : ");
	int i = 32;
	int j = 1;

	while (i <= 126)
	{
		if ((check_num(ft_isalpha(i), isalpha(i), j)) == 0)
		{
			printf("ft_isalpha = %d\n", ft_isalpha(i));
			printf("isalpha = %d\n", isalpha(i));
		}
		i+=10;
		j++;
	}
	if ((check_num(ft_isalpha(65), isalpha(65), j)) == 0)
	{
		printf("ft_isalpha = %d\n", ft_isalpha(65));
		printf("isalpha = %d\n", isalpha(65));
	}
	j++;
	if ((check_num(ft_isalpha(97), isalpha(97), j)) == 0)
	{
		printf("ft_isalpha = %d\n", ft_isalpha(97));
		printf("isalpha = %d\n", isalpha(97));
	}
	j++;
	if ((check_num(ft_isalpha(90), isalpha(90), j)) == 0)
	{
		printf("ft_isalpha = %d\n", ft_isalpha(90));
		printf("isalpha = %d\n", isalpha(90));
	}
	j++;
	if ((check_num(ft_isalpha(122), isalpha(122), j)) == 0)
	{
		printf("ft_isalpha = %d\n", ft_isalpha(122));
		printf("isalpha = %d\n", isalpha(122));
	}
	printf("\n");
	return (0);
}
