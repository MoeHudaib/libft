#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;
	int	last_occurness;

	index = 0;
	last_occurness = -1;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			last_occurness = index;
		index++;
	}
	if (last_occurness == -1)
		return (NULL);
	str += last_occurness;
	return (char *)(str);
}
