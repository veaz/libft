#include "libft.h"

int	main()
{
	char	*ptr;
	printf("----strjoin----\n");
	printf("Parametros (AAAABBBB, CCCCDDDD)\n");
	char strjoin1[100]= "tripouille";
	char strjoin2[]= "42";
	ptr = ft_strjoin(strjoin1, strjoin2);
	printf("Valor de puntero = %s\n\n", ptr);

}
