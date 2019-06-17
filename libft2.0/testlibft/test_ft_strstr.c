#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRSTR : ");
	if ((check(ft_strstr("coucou", ""), strstr("coucou", ""), 1)) == 0)
	{
		printf("%s\n", ft_strstr("coucou", ""));
		printf("%s\n", strstr("coucou", ""));
	}
	if ((check(ft_strstr("tatacoucou", "cou"), strstr("tatacoucou", "cou"), 2)) == 0)
	{
		printf("%s\n", ft_strstr("tatacoucou", "cou"));
		printf("%s\n", strstr("tatacoucou", "cou"));
	}
	if ((check(ft_strstr("taratatataccouhfhsg", "cou"), strstr("taratatataccouhfhsg", "cou"), 3)) == 0)
	{
		printf("%s\n", ft_strstr("taratatataccouhfhsg", "cou"));
		printf("%s\n", strstr("taratatataccouhfhsg", "cou"));
	}
	printf("\n");
	return (0);
}
