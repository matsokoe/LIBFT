#include "../libft.h"
#include "test.h"

static void		toupp(unsigned int i, char *c)
{
	int n;
	n = i;
	*c = ft_toupper(*c);
}

int main()
{
	printf("FT_STRITERI : ");
	char s[7] = "coucou";
	ft_striteri(s, toupp);
	if ((check("COUCOU", s, 1)) == 0)
		printf("\n%s\n", s);
	printf("\n");
	return (0);
}
