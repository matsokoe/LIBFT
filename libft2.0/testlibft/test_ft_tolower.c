#include "../libft.h"
#include "test.h"

int main ()
{
	char c[7] = "ABCDEF";
	char a[7];
	char b[7];
	printf("FT_TOLOWER : ");
	int i = 0;
	while (c[i])
	{
		a[i] = ft_tolower(c[i]);
		b[i] = tolower(c[i]);
		i++;
	}
	a[i] = '\0';
	b[i] = '\0';
	check(a, b, 1);
	printf("\n");
	return (0);
}
