#include "libft.h"

void	*ft_memchr(const void *ptr, int c, unsigned int n)
{
	const unsigned char	*a;
	unsigned int		i;

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
