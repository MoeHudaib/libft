void*	ft_memset(void* buffer, int value, unsigned int len)
{
	unsigned char*	a;

	a = (unsigned char *)buffer;
	while (len--)
	{
		*a++ = (unsigned char)value;
	}
	return (buffer);
}
