#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i = 0;
	size_t	src_len = 0;
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

