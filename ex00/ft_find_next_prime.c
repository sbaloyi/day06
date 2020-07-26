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

int ft_find_next_prime(int nb) 
{
	int counter = 1;
	
	while ( ft_is_prime(nb) != counter) 
	{
		if (ft_is_prime(nb) == counter)
			return (nb);
		++nb;
	}
	return (nb);
}
