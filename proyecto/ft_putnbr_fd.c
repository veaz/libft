#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char c;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	while (n >= 10)
	{
		//printf("n = %i\n", n);
		c = n % 10 + 48;
		//printf("c = %c\n", c);
		ft_putchar_fd(c, fd);
		n = n / 10;
	}
	c = n % 10 + 48;
	//printf("\nc = %c\n", c);
	ft_putchar_fd(c, fd);

}
