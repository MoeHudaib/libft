#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i; // Calculate length of dest and src

	dest_len = 0;
	src_len = 0;
	while (dest_len < n && dest[dest_len])
		dest_len++;

	while (src[src_len])
		src_len++; // If dest_len >= size, there's no room to append
	if (dest_len == n)
		return n + src_len; // Append as much of src as possible
	i = 0;
	while (src[i] && (dest_len + i + 1) < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	} // Null-terminate if there's room
	if (dest_len + i < n)
		dest[dest_len + i] = '\0';
	return dest_len + src_len;
}
