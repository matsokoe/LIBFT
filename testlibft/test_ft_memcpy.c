#include "../libft.h"
#include "test.h"

int main()
{
	const char memcpy_src[7] = "Unreal";
	char ft_dst[7];
	char dst[7];
	printf("FT_MEMCPY : ");
	ft_memcpy(ft_dst, memcpy_src, 7);
	memcpy(dst, memcpy_src, 7);
	if ((check(dst, ft_dst, 1)) == 0)
	{
		printf("%s\n", ft_dst);
		printf("%s\n", dst);
	}
	printf("\n");
	return (0);
}
