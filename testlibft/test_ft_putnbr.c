#include "../libft.h"
#include "test.h"

int main()
{
//	printf("\nFT_PUTNBR : \n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(5);
	write(1, "\n", 1);
	return (0);
}
