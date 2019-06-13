#include "../libft.h"
#include "test.h"

char	toupp(char c)
{
	c = ft_toupper(c);
	return (c);
}

int main()
{
	printf("FT_STRMAP : ");
	char *src = "coucou";
	char *res;

	res = ft_strmap(src, toupp);
	if ((check(res, "COUCOU", 1)) == 0)
		printf("res = %s\nExpected = COUCOU\n", res);
	printf("\n");
	return (0);
}
