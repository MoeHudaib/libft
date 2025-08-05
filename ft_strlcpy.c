#include "libft.h"

unsigned int	strlcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int src_len = 0;
	// Calculate length of src
	while (src[src_len])
		src_len++;
	if (n == 0)
		return (src_len);	// Copy up to n - 1 characters
	while (i < n - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';  // Always null-terminate if n > 0
	return (src_len);
}

