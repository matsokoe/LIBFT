#include "../libft.h"
#include "test.h"

int		check(char *s1, char *s2, int i)
{
	 i =1;
	if (strcmp(s1, s2) == 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		return (0);
	}
	return (1);
}
