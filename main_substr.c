#include "libft.h"

int	main()
{
	char	*ptr;
	printf("----substr----\n");
	printf("Parametros (AAAABBBB, 4, 4)\n");
	char substr1[]= "AAAABBBB";
	ptr = ft_substr(substr1, 4, 4);
	printf("Valor de puntero = %s\n\n", ptr);

}
