#include "libft.h"

char	*ft_strdup(const char *src)
{
	int	len;
	char	*copy;
	int	i;

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
