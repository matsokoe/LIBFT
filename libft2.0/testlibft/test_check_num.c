#include "../libft.h"
#include "test.h"

int		check_num(size_t a, size_t b, int i)
{
	i = 1;
	if (a == b)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		return (0);
	}
	return (1);
}
