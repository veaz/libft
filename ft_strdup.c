#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc(len);
	
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_memcpy(ptr, s, len);
		return (ptr);
	}
}
