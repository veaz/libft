#include "libft.h"

int	main()
{
	printf("----strlcat----\n");
	printf("Parametros (AAAABBBB[100], CCCCDDDD[8])\n");
	char strlcat1[100]= "AAAABBBB";
	char strlcat2[]= "CCCCDDDD";
	//char strlcat3[100]= "AAAABBBB";
	//char strlcat4[]= "CCCCDDDD";
	printf("ft_strlcat = %li\n", ft_strlcat(strlcat1, strlcat2, 100));
	//printf("strlcat = %li\n", strlcat(strlcat1, strlcat2, 100));
	printf("Valor de dest1 es  = %s\n\n", strlcat1);
	//printf("Valor de dest2 es  = %s\n\n", strlcat3);

}
