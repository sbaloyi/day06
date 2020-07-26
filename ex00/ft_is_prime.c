int ft_is_prime(int nb) 
{
	int i = 2;
	int counter = 0;
	while (i <= nb / 2) 
	{
		if (nb % i == 0)
		{
			counter++;
			break;
		}
		i++;
	}
	if (counter == 0 && nb != 1)
		return (1);
	else 
		return (0);
}
