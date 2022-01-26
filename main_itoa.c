#include "libft.h"

int	main()
{
	printf("--iota--\n");
	char *s = ft_itoa(20);
	printf("Enviando 20 =  %s\n", s);
	printf("ft_strlen = %i\n", ft_strlen(s));

	s = ft_itoa(500);
	printf("\n\n\nEnviando 500 =  %s\n", s);
	printf("ft_strlen = %i\n", ft_strlen(s));


	s = ft_itoa(12500);
	printf("\n\n\nEnviando 12500 =  %s\n", s);
	printf("ft_strlen = %i\n", ft_strlen(s));

	s = ft_itoa(-234);
	printf("\n\n\nEnviando -234 =  %s\n", s);
	printf("ft_strlen = %i\n", ft_strlen(s));
}
