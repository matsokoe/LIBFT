#include "../libft.h"
#include "test.h"

static void		toupp(char *c)
{
	*c = ft_toupper(*c);
}

int main()
{
	printf("FT_STRITER : ");
	char s[7] = "coucou";
	ft_striter(s, toupp);
	if ((check("COUCOU", s, 1)) == 0)
		printf("\n%s\n", s);
	printf("\n");
	return (0);
}
