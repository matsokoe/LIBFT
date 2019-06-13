#include "../libft.h"
#include "test.h"

int main(void)
{
	char memchr_src[11] = "hellokitty";
	char *ft_p;
	char *p;

	printf("FT_MEMCHR : ");
	if ((check(ft_memchr(memchr_src, 105, 11), memchr(memchr_src, 105, 11), 1)) == 0)
	{
		printf("%s\n", ft_memchr(memchr_src, 105, 11));
		printf("%s\n", memchr(memchr_src, 105, 11));
	}
	ft_p = ft_memchr(memchr_src, 32, 11);
	p = memchr(memchr_src, 32, 11);
	if (ft_p == p)
		printf("[OK] ");
	else
	{
		printf("[FAIL] ");
		printf("\nft_memchr = %p\n", ft_p);
		printf("memchr = %p\n", p);
	}
	printf("\n");
	return (0);
}
