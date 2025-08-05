#include <unistd.h>
char	*ft_strchr(const char *str, char c)
{
	const char	*a;

	a = str;
	while (*a)
	{
		if (*a == c)
			return (char *)a;
		a++;
	}
	return (NULL);
}
