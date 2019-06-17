#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRSPLIT : ");
// ----------------------TEST 1 -----------------------
	char **tab_split;
	char **tab_test;
	int index = 0;
	int	test_fail = 1;
	tab_test = (char**)malloc(sizeof(char**) * 20);
	tab_test[index]  = "salut";
	index++;
	tab_test[index] = "les";
	index++;
	tab_test[index] = "etudiants";
	int i = 0;
	tab_split = ft_strsplit("*salut*les***etudiants*", '*');
	while (tab_split[i])
	{
		if (strcmp(tab_split[i], tab_test[i]) != 0)
			test_fail = 0;
		i++;
	}
	if (test_fail == 1)
		printf("[OK] ");
	else
	{
		printf("\nsrc = *salut*les***etudiants*\n");
		i = 0;
		while (tab_split[i])
		{
			printf("tab[%d] = %s\n", i, tab_split[i]);
			i++;
		}
	}
// ------------------- TEST2 -------------------------
	char **tab_split2;
	i = 0;
	index = 0;
	test_fail = 1;
	tab_test[index]  = "a";
	index++;
	tab_test[index] = "YrB5mQSeVW";
	index++;
	tab_test[index] = "h";
	index++;
	tab_test[index] = "m";

	tab_split2 = ft_strsplit("a****YrB5mQSeVW***h************m", '*');
	while (tab_split2[i])
	{
		if (strcmp(tab_split2[i], tab_test[i]) != 0)
			test_fail = 0;
		i++;
	}

	if (test_fail == 1)
		printf("[OK] ");
	else
	{
		printf("\nsrc = a****YrB5mQSeVW***h************m\n");
		while (tab_split2[i])
		{
			printf("tab[%d] = %s\n", i, tab_split2[i]);
			i++;
		}
	}
// ------------------------- TEST 3----------------------------
	char **tab_split3;
	i = 0;
	index = 0;
	tab_test[index] = "aYrB5mQSeVWm";

	tab_split3 = ft_strsplit("*******************aYrB5mQSeVWm", '*');
	while (tab_split3[i])
	{
		if (strcmp(tab_split3[i], tab_test[i]) != 0)
			test_fail = 0;
		i++;
	}

	if (test_fail == 1)
		printf("[OK] ");
	else
	{
		printf("src = *******************aYrB5mQSeVWm\n");
		while (tab_split3[i])
		{
			printf("tab[%d] = %s\n", i, tab_split3[i]);
			i++;
		}
	}

// ------------------- TEST -----------------
	char	*s = "      split       this for   me  !       ";

	char	**tab_split4 = ft_strsplit(s, ' ');
	i = 0;
	index = 0;
	tab_test[index] = "split";
	index++;
	tab_test[index] = "this";
	index++;
	tab_test[index] = "for";
	index++;
	tab_test[index] = "me";
	index++;
	tab_test[index] = "!";
	while (tab_split4[i])
	{
		if (strcmp(tab_split4[i], tab_test[i]) != 0)
			test_fail = 0;
		i++;
	}
	if (test_fail == 1)
		printf("[OK] ");
	else
	{
		printf("src = \"      split       this for   me  !       \"\n");
		while (tab_split4[i])
		{
			printf("tab[%d] = %s\n", i, tab_split4[i]);
			i++;
		}
	}

// ------------------------- TEST 5 --------------------
	char	*s1 = "             ";

	char	**tab_split5 = ft_strsplit(s1, ' ');
	i = 0;
	while (tab_split5[i])
	{
		if (strcmp(tab_split4[i], tab_test[i]) != 0)
			test_fail = 0;
		i++;
	}
	if (!(tab_split5[i]))
		printf("[OK] ");
	else
	{
		printf("\nsrc = \n");
		while (tab_split5[i])
		{
			printf("tab[%d] = %s\n", i, tab_split5[i]);
			i++;
		}
	}
	printf("\n");
	return (0);
}
