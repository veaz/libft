#include "libft.h"

int	main()
{
	printf("----strjoin----\n");
	char * s = ft_strjoin("tripouille", "42");
	printf("Retorno 1 = %s\n", s);

	s = ft_strjoin("", "42");
	printf("Retorno 2 = %s\n", s);

	s = ft_strjoin("42", "");
	printf("Retorno 3 = %s\n", s);

	s = ft_strjoin("", "");
	printf("Retorno 4 = %s\n", s);
}
