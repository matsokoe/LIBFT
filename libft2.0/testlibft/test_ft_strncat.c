#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRNCAT : ");
// ----------- TEST 1 -------------
	char t1[40] = "coucou ";
	char t2[40] = "coucou ";
	const char *add = "le chat, miaou";
	size_t n = 7;
	char *test1;
	char *test2;
	test1 = ft_strncat(t1, add, n);
	test2 = strncat(t2, add, n);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strncat = %s\n", test1);
		printf("strncat = %s\n", test2);
	}
// ----------- TEST 2 -------------
	char tab_test[40] = "coucou";
	char *test_add = "";
	test1 = ft_strncat(tab_test, test_add, n);
	test2 = strncat(tab_test, test_add, n);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strncat = %s\n", test1);
		printf("strncat = %s\n", test2);
	}
// ----------- TEST 3 -------------
	char tab[40] = "coucou";
	char *test = "coucou";
	test1 = ft_strncat(tab, test, 0);
	test2 = strncat(tab, test, 0);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strncat = %s\n", test1);
		printf("strncat = %s\n", test2);
	}
	printf("\n");
	return (0);
}
