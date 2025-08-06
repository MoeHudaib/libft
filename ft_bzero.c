#include "libft.h"

void	ft_bzero(void* buffer, size_t len)
{
	unsigned char *a;

	a = (unsigned char *)buffer;
	while (len--)
	{
		*a = 0;
		a++;
	}
}
