char *ft_strncpy(char* dest, char* src, unsigned int n);

char *ft_strncpy(char* dest, char* src, unsigned int n)
{
	int counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		++counter;
	}

	if (src[counter] == '\0' && counter < n)
	{
		while (dest[counter] = "\0")
		{
			dest[counter] = '\0';
			++counter;
		}
	}
	return dest;
}
