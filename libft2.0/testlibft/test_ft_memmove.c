#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_MEMMOVE : ");
	// -------------- TEST 1 --------------------
	char *s = "bbbbbb\0bbbbbb\0";
	char dst[40] = "123456789";
	char dst2[40] = "123456789";
	size_t size = 20;
	if (memcmp(dst, dst2, size) == 0)
		printf("[OK] ");
	else
	{
		printf("memmove = %s\n", memmove(dst, s, size));
		printf("ft_memmove = %s\n", ft_memmove(dst2, s, size));
	}
	// ------------- TEST 2 -----------------
	char d1[40] = "123456789";
	char d2[40] = "123456789";
	size = 10;
	if (memcmp(d1, d2, size) == 0)
		printf("[OK] ");
	else
	{
		printf("memmove = %s\n", memmove(d1, s, size));
		printf("ft_memmove = %s\n", ft_memmove(d2, s, size));
	}
	// ----------------- TEST 3 ----------------
	char d3[40] = "123456789";
	char d4[40] = "123456789";
	size = 10;
	if (memcmp(d3, d4, size) == 0)
		printf("[OK] ");
	else
	{
		printf("memmove = %s\n", memmove(d3, d3+5, size));
		printf("ft_memmove = %s\n", ft_memmove(d4, d4+5, size));
	}
	printf("\n");
}
