#include "libft.h"

int	ft_atoi(const char *str)
{
	int	results;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	results = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = 10 *results + (str[i] - '0');
		i++;
	}
	return (results * sign);
}
