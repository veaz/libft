#include "libft.h"

int	ft_countchar(char const *s, char c) //Innecesario
{
	int	n;
	int	x;

	n = 0;
	x = 0;
	while(s[x] != '\0')
	{
		if (s[x] == c && (char)s[x + 1] != c)
			n++;
		x++;
	}
	//printf("Valor de n = %i\n", n);
	return (n);
	
}

int	ft_countwords(char *s, char c, int del)
{
	int	i;
	int w;
	int	temp;


	i = 0;
	w = 0;
	temp = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			temp++;
			i++;
		}
	}
	i = i + del;
	//printf("existen %i palabras\n", temp);
	return (temp);
}

int	ft_lenword(const char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	//printf("longitud de x = %i\n", x);
	return (x);
}

char	**ft_split(char const *s, char c)
{
	int		del;
	int		n;
	int		count;
	char	**array;
	int		words;
	char	*trim;
	int		other;
	char	*testw;
	char	*ptr;

	ptr = (char *)s;
	trim = ft_strtrim(s, &c);
	s = ft_strtrim(s, &c);
	//printf("recibiendo (%s, %c)\n", s, c);
	//printf("TRIM = %s\n", trim);
	n = 0;
	count = 0;
	other = 0;
	del = ft_countchar(s, c);
	//if ( s == NULL)
	//	return (NULL);
	//printf("Se han encontrado %i delimitadores\n", del);
	//if (!del)
	//	return (NULL);
	words = ft_countwords(ptr, c, del);
	//printf("Hay %i palabras\n", words);
	if (!s)
		return (NULL);
	array = (char **)malloc ((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	
	while (n < words)
	{
		//s = ft_next((char *)s, c, count);
		other = ft_lenword(s, c);
		//s = s + other;
		//printf("other = %i , s = %s\n", other,  s);
		testw = ft_substr((char *)s, 0, other);
		if (!testw)
			return (NULL);
		array[count] = testw;
		//printf("\ntestw[%i] = %s\n", count, testw);
		s = s + other;
		//s = ft_next((char *)s, c, count);
		n++;
		count++;
	}
	array[count] = 0;
	return (array);
}
