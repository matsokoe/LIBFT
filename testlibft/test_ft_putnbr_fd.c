#include "../libft.h"
#include "test.h"

int main()
{
	printf("\nFT_PUTNBR_FD :\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	return (0);
}
