#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRTRIM : ");
	const char src[32] = "  coucou tu veux voir mon git  ";
	const char s1[28] = "coucou tu veux voir mon git";
	const char *test;
	test = ft_strtrim(src);
	if ((check((char*)test, (char*)s1, 1) == 0))
		printf("src = %s\nExpected = %s\nres = %s\n", src, s1, test);
	printf("\n");
	return (0);
}
