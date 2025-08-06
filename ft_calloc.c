#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	unsigned char	*ptr;
	size_t	i;

	total = count * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
        	return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (void *)ptr;
}

