#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		++i;
	}
	return (0);
}
