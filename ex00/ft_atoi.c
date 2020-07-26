int ft_atoi(char *str) 
{
	int result = 0;
	int sign = 1;
	int counter = 0;

	if (str[0] == '-') 
	{
		sign = -1;
		counter++;
	}

	while (str[counter] != '\0')
	{
		result = result * 10 + str[counter] - '0';
		counter++;
	}
	return (sign * result);
}
