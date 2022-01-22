#include "libft.h"

int	main()
{
	printf("----strlcat----\n");
	//printf("Parametros (AAAABBBB[100], CCCCDDDD[8])\n");
	//char strlcat1[100]= "AAAABBBB";
	//char strlcat2[]= "CCCCDDDD";
	//char strlcat3[100]= "AAAABBBB";
	//char strlcat4[]= "CCCCDDDD";
	
	//char dest[30]; memset(dest, 0, 30);
	//char * src = (char *)"AAAAAAAAA";
	//char dest2[30]; memset(dest2, 0, 30);
	//char * src2 = (char *)"AAAAAAAAA";
	
	printf("ft_strlcat = %li\n", ft_strlcat("pqrstuvwxyz", "abcd", 0));
	printf("strlcat = %li\n", strlcat("pqrstuvwxyz", "abcd", 0));
	//printf("strlcat = %li\n", strlcat(strlcat1, strlcat2, 100));
	//printf("ft_strlcat es  = %s\n\n", dest);
	//printf("strlcat es  = %s\n\n", dest2);
	//printf("Valor de dest2 es  = %s\n\n", strlcat3);

}
