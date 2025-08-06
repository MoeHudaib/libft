#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*copy;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
