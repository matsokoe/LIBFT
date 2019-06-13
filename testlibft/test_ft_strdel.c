#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRDEL : ");
	char *test;
	if (!(test = (char*)malloc(sizeof(char*) * 10)))
		return (0);
	ft_strdel(&test);
	if (test != NULL)
		printf("[FAIL] ");
	else
		printf("[OK] ");
	printf("\n");
	return (0);
}
