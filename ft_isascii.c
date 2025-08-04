int	ft_isascii(char c)
{
	int	max;

	max = 255;
	if (c >= 0 && c <= max)
		return (1);
	return (0);
}
