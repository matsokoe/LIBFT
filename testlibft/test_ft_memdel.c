#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_MEMDEL : ");
	void *test;
	if (!(test = (void*)malloc(sizeof(void*) * 10)))
		return (0);
	ft_memdel(&test);
	if (test != NULL)
		printf("[FAIL] ");
	else
		printf("[OK] ");

	ft_memdel(&test); // test null
	if (test != NULL)
		printf("[FAIL] ");
	else
		printf("[OK] ");
	printf("\n");

	return (0);
}
