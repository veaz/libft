#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totalsize;
	
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_bzero(ptr, totalsize);
		return (ptr);
	}
}
