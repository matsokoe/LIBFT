#include "../libft.h"
#include "test.h"

int main()
{
	char *test = (char*)malloc(sizeof(char*) * 256);
	printf("FT_MEMSET : ");
	if ((check(ft_memset(test, 0, 256), memset(test, 0, 256), 1) == 0))
	{
		printf("\nft_memtest = %s\n", ft_memset(test, 0, 256));
		printf("memtest = %s\n", memset(test, 0, 256));
	}
	printf("\n");
	return (0);
}
