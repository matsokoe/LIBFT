#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_MEMALLOC : ");
	void *s;
	int i = 0;
	int test = 1;
	s = ft_memalloc(10);
	char *a = (char*)s;
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
