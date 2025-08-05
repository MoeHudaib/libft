#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int total;
	unsigned char *ptr;
	unsigned int i;

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

