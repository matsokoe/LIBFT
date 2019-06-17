#include "../libft.h"
#include "test.h"

int main()
{
	int i = 0;
	int test = 1;

	printf("FT_ISASCII : ");
	while (i <= 177)
	{
		if (ft_isascii(i) != isascii(i))
			test = 0;
		i++;
	}
	if (test == 1)
		printf("[OK] ");
	else
		printf("[FAIL]");
	printf("\n");
}
