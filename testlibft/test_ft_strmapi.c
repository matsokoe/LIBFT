#include "../libft.h"
#include "test.h"

char	toupp(unsigned int i, char c)
{
	int n;
	n = i;
	c = ft_toupper(c);
	return (c);
}

int main()
{
	printf("FT_STRMAPI : ");
	char *src = "coucou";
	char *res;
	res = ft_strmapi(src, toupp);
	if ((check(res, "COUCOU", 1)) == 0)
		printf("res = %s\nExpected = COUCOU\n", res);
	printf("\n");
	return (0);
}
