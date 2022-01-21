#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int	len;
	int	lens1;
	int	lens2;	

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = lens1 + lens2;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, lens1 + 1);
	printf("VALOR PTR = %s\n", ptr);
	ft_strlcat(ptr, s2, lens2);
	printf("VALOR PTR = %s\n", ptr);
	return (ptr);
}
