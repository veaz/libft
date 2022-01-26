#include "libft.h"

int	main()
{
	char	*ptr;
	char	cadena[] = "esta.es.una.cadena";
	char	c;

	//*ptr = cadena[0];
	ptr = cadena;
	c = '.';
	ft_split(ptr, c);
}
