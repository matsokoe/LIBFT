#include "../libft.h"
#include "test.h"

int main()
{
	char src_memccpy[12] = "hello kitty";
	char ft_dst[12];
	char dst[12];
	char *ft_pointer;
	char *pointer;
	char ft_pointer_null[12];
	char pointer_null[12];
	printf("FT_MEMCCPY : ");
	ft_memccpy(ft_dst, src_memccpy, 'i', 11);
	memccpy(dst, src_memccpy, 'i', 12);
	if ((check(dst, ft_dst, 1)) == 0)
	{
		printf("%s\n", ft_dst);
		printf("%s\n", dst);
		printf("------\n");
	}

	ft_pointer = ft_memccpy(dst, src_memccpy, 'i', 12);
	pointer = memccpy(dst, src_memccpy, 'i', 12);
	if ((check(ft_pointer, pointer, 2)) == 0)
	{
		printf("%p\n", ft_pointer);
		printf("%p\n", pointer);
		printf("------\n");
	}

	(ft_memccpy(ft_pointer_null, src_memccpy, 'a', 12) == memccpy(pointer_null, src_memccpy, 'a', 12))
		? printf("[OK] ") : printf("[FAIL] ");
	printf("\n");
}
