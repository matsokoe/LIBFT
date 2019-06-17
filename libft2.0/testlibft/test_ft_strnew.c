#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRNEW : ");
	char *a;
	int i = 0;
	int test = 1;
	a = ft_strnew(10);
	while (i < 10)
	{
		if (a[i++])
			test = 0;
	}
	if (test == 1)
		printf("[OK] ");
	else
		printf("[FAIL] ");
	printf("\n");
	return (0);
}
