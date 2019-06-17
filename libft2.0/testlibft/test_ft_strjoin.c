#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRJOIN :");
	//--------------- TEST 1 ---------------
	const char s1[40] = " coucou ";
	const char s2[40] = "le chat";
	char *test;
	char *res = " coucou le chat";

	test = ft_strjoin(s1, s2);
	if ((check(test, res, 1)) == 0)
		printf("s1 = %s\ns2 = %s\ntest = %s\nExpected = %s\n", s1, s2, test, res);
	
	// ------------ TEST 2 ------------------
	const char *s3 = NULL;
	res = NULL;
	test = ft_strjoin(s3, s2);
	if (test == res)
		printf("[OK] ");
	else
		printf("\ns1 = %s\ns2 = %s\ntest = %s\nExpected = %s\n", s3, s2, test, res);
	printf("\n");
	return (0);
}
