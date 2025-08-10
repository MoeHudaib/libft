/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhdeeb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:00:26 by mhdeeb            #+#    #+#             */
/*   Updated: 2025/08/10 13:00:41 by mhdeeb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return ((char *)(str));
}
