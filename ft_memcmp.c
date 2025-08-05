#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	unsigned int			i;

	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		++i;
	}
	return (0);
}
