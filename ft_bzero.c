void	ft_bzero(void* buffer, unsigned int len)
{
	unsigned char *a;

	a = (unsigned char *)buffer;
	while (len--)
	{
		*a++ = 0;
	}
}
