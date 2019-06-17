#include "../libft.h"
#include "test.h"

int main()
{
	int strn1 = 3, strn2 = 2, strn3 = 20;
	printf("FT_STRNSTR : ");
	if ((check(ft_strnstr("coucou", "", strn1), strnstr("coucou", "", strn1), 1)) == 0)
	{
		printf("\n%s\n", ft_strnstr("coucou", "", strn1));
		printf("%s\n", strnstr("coucou", "", strn1));
	}
	if (ft_strnstr("tatacoucou", "cou", strn2) == strnstr("tatacoucou", "cou", strn2))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\n%s\n", ft_strnstr("tatacoucou", "cou", strn2));
		printf("%s\n", strnstr("tatacoucou", "cou", strn2));
	}
	if (ft_strnstr("taratatataccouhfhsg", "cou", strn3) == strnstr("taratatataccouhfhsg", "cou", strn3))
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\n%s\n", ft_strnstr("taratatataccouhfhsg", "cou", strn3));
		printf("%s\n", strnstr("taratatataccouhfhsg", "cou", strn3));
	}
	printf("\n");
	return (0);
}
