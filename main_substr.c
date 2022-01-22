#include "libft.h"

int	main()
{
	char	*ptr;
	char	*ptr2;
	printf("----substr----\n");
	printf("Parametros (AAAABBBB, 4, 4)\n");
	char substr1[]= "";
	char substr2[]= "";
	//char substr3[]= "abc";
	//char substr4[]= "abc";
	ptr = ft_substr(substr1, 1, 3);
	ptr2 = ft_substr(substr2, 1, 3);
	printf("ft_substr valor de puntero = %s\n\n", ptr);
	printf("substr valor de puntero = %s\n\n", ptr2);

}
