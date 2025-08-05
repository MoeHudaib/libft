#include "libft.h"

void*	ft_memmove(void* dest, const void* src, unsigned int n)
{
	unsigned char	*a;
	unsigned const char	*b;

	a = (unsigned char *)dest;
	b = (unsigned const char *)src;
	if (a < b)
	{
		while (n--)
		{
			*a++=*b++;
		}
	}
	else
	{
		while (n--)
		{
			a[n] = b[n];
		}
	}

	return (dest);
}
