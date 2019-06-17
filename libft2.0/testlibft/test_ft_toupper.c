#include "../libft.h"
#include "test.h"

int main()
{
	char c[7] = "abcdef";
	char a[7];
	char b[7];
	printf("FT_TOUPPER : ");
	int i = 0;
	while (c[i])
	{
		a[i] = ft_toupper(c[i]);
		b[i] = toupper(c[i]);
		i++;
	}
	a[i] = '\0';
	b[i] = '\0';
	check(a, b, 1);
	printf("\n");
	return (0);
}
