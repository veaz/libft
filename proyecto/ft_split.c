#include "libft.h"

int	ft_countchar(char const *s, char c)
{
	int	n;

	n = 0;	
	while(*s != '\0')
	{
		if (*s == c)
			n++;
		s++;
	}
	//printf("Valor de n = %i\n", n);
	return (n);
	
}

char	**ft_split(char const *s, char c)
{
	int	x;
	int	n;
	//char	*temp;

	n = 0;
	x = ft_countchar(s, c);
	printf("Se han encontrado %i delimitadores\n", x);
	x = 0;
	while (n >= 0 && s[x] != '\0')
	{
		if (s[x] == c)
		{
			//temp = ft_strdup(s, x, x);
			n++;
		}
		else
		{
			//tem[x] = s[x];
		}

		x++;
	}

	

	return ((char **)s);
}
