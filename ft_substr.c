#include "libft.h";

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*ptr;
	int	reallen;

	if (start > 0)
		return (ptr[start]);
	else
	{
		reallen = (ft_strlen(s) - 1);
		return (reallen - len);
	}
}
