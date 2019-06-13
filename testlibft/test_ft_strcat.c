#include "../libft.h"
#include "test.h"

int main()
{
	char tab1[40] = "coucou ";
	char tab2[40] = "coucou ";
	const char *add = "le chat, miaou";
	printf("FT_STRCAT : ");
	char *test1;
	char *test2;
	test1 = ft_strcat(tab1, add);
	test2 = strcat(tab2, add);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strcat = %s\n", test1);
		printf("strcat = %s\n", test2);
	}
	const char *test = "";
	char tab_test[40] = "coucou";
	test1 = ft_strcat(tab_test, test);
	test2 = strcat(tab_test, test);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strcat = %s\n", test1);
		printf("strcat = %s\n", test2);
	}
	printf("\n");
	return (0);
}
