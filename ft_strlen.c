#include "libft.h"

unsigned int	ft_strlen(const char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}
