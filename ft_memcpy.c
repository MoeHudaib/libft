#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	const unsigned char *b;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	while (n--)
	{
		*a = *b;
		b++;
		a++;
	}
	return (dest);
}
