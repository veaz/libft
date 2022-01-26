#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;	
	while(s[x] != '\0')
	{
		ft_putchar_fd(s[x], fd);
		x++;
	}
}
