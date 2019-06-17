#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRSUB : ");
	const char *src = "hello kitty";
	char *test;
	char *s = "kitty";
	test = ft_strsub(src, 6, 6);
	if ((check(test, s, 1)) == 0)
		printf("\nsrc = %s\ntest = %s\nExpected = %s\n", src, test, s);
	printf("\n");
	return (0);
}
