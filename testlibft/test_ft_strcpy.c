#include "../libft.h"
#include "test.h"

int main()
{
	const char *src = "Pikachu attaque tonnerre";
	char *dup = (char*)malloc(sizeof(char*) * strlen(src) + 1);
	char *dup2 = (char*)malloc(sizeof(char*) * strlen(src) + 1);

	printf("FT_STRCPY : ");

	if ((check(ft_strcpy(dup, src), strcpy(dup2, src), 1)) == 0)
	{
		printf("ft_strcpy = %s\n", dup);
		printf("strcpy = %s\n", dup2);
	}
	printf("\n");
	return (0);
}
