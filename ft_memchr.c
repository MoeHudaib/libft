#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*a;
	size_t			i;

	a =(const unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
			return (void *)(a+i);
		i++;
	}
	return (NULL);
}
