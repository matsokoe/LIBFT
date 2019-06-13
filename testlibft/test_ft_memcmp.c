#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_MEMCMP : ");
	if ((check_num((size_t)ft_memcmp("hello world", "hello world", 12),
					(size_t)memcmp("hello world", "hello world", 12), 1)) == 0)
	{
		printf("%d\n", ft_memcmp("hello world !", "hello world !", 14));
		printf("%d\n", memcmp("hello world !", "hello world !", 14));
	}

	if (ft_memcmp("hello aorld", "hello world", 12) < 0 && memcmp("hello aorld", "hello world", 12) < 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\n%d\n", ft_memcmp("hello aorld", "hello world", 12));
		printf("%d\n", memcmp("hello aorld", "hello world", 12));
	}

	if (ft_memcmp("hello world", "hello aorld", 12) > 0 && memcmp("hello world", "hello aorld", 12) > 0)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\n%d\n", ft_memcmp("hello world !", "hello aorld !", 14));
		printf("%d\n", memcmp("hello world !", "hello aorld !", 14));
	}
	printf("\n");
	return (0);
}
