#include "libft.h"

static int	ft_intlen(int c)
{
	int	x;

	x = 1;
	if (c > 0 && c < 10)
	return (1);
	while(c /= 10)
		x++;
	return (x);
}

void ft_putnbr_fd(int n, int fd)
{
	char c;
	int	t;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	printf("n tiene %i numeros\n", ft_intlen(n));
	t = (n % 100) / 100; 
	printf("t = %i", t);
	//while (n >= 10)
	//{
		//printf("n = %i\n", n);
	//	c = n % 10 + 48;
		//printf("c = %c\n", c);
	//	ft_putchar_fd(c, fd);
	//	n = n / 10;
	//}
	
	c = n % 10 + 48;
	printf("\nc = %c\n", c);
	ft_putchar_fd(c, fd);

}
