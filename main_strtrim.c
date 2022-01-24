#include "libft.h"

int	main()
{
	printf("----strtim----\n");
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("Retorno 1 = %s\n\n\n", s);

	s = ft_strtrim("tripouille   xxx", " x");
	printf("Retorno 2 = %s\n", s);

	s = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("Retorno 3 = %s\n", s);

	s = ft_strtrim("   xxx   xxx", " x");
	printf("Retorno 4 = %s\n", s);

	s = ft_strtrim("", "123");
	printf("Retorno 5 = %s\n", s);

	s = ft_strtrim("123", "");
	printf("Retorno 6 = %s\n", s);

	s = ft_strtrim("", "");
	printf("Retorno 7 = %s\n", s);

	s = ft_strtrim("abcdba", "acb");
	printf("Retorno 8 = %s\n", s);
}
