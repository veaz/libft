#include "libft.h"

//char	upper(unsigned int i, char c)
//{
//	if (c >= 'a' && c <= 'z')
//		c -= ('a' - 'A');
//	return (c);
//}

void *f(unsigned int i, char c)
{
	printf("el char es %c\n", c);
	printf("el int es %i\n", i);
	return (0);
}


int	main(void)
{
	char	*str;

	str = ft_strmapi("HeLl0 wOrLd!!", f(14, 'c'));
	printf("%s\n", str);
}


