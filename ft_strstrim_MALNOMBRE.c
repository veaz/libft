#include "libft.h"

char	*ft_strstrim(char const *s1, char const *set)
{
	ft_strchr(s1, set);
	ft_strrchr(s1, set);
	return (s1);
}
