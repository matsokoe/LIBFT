#include "../libft.h"
#include "test.h"

int main()
{
	char *src = "Pikachu attaue tonnerre";
	char *dup = (char*)malloc(sizeof(char*) * strlen(src) + 1);
	size_t len = 10;
	printf("FT_STRNCPY : ");
	char *test1;
	char *test2;
	test1 = ft_strncpy(dup, src, len);
	test2 = strncpy(dup, src, len);
	if ((check(test1, test2, 1)) == 0)
	{
		printf("ft_strncpy = %s\n", test1);
		printf("strncpy = %s\n", test2);
	}
	printf("\n");
	return (0);
}
