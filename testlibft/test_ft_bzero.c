#include "../libft.h"
#include "test.h"

int main()
{
	char *test2 = (char*)malloc(sizeof(char*) * 256);
	char test3[256];
	printf("FT_BZERO : ");
	ft_bzero(test2, 256);
	bzero(test3, 256);
	if ((check(test2,test3, 1)) == 0)
	{
		printf("ft_bzero = %s\n", test2);
		printf("bzero = %s\n", test3);
	}
	printf("\n");
	return (0);
}
