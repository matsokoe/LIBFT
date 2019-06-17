#include "../libft.h"
#include "test.h"

int main()
{
	printf("FT_STRCLR : ");
	char s[28] = "coucou tu veux voir mon git";
	int i = 0;
	ft_strclr(s);

	while (i < 28)
	{
		if (s[i] != '\0')
		{
			printf("[FAIL] ");
			printf("%s\n", s);
			return (0);
		}
		i++;
	}
	printf("[OK] ");
	printf("\n");
	return (0);
}
