#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	j;

	if (*substr == '\0')
		return (char *)(str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (substr[j] && str[i + j] == substr[j] && (i + j) < n)
			j++;
		if (substr[j] == '\0')
		{
			str += i;
			return (char *)(str);
		}
		i++;
	}
	return (NULL);
}

