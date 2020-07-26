int ft_iterative_power(int nb, int power) 
{
	int sum = nb;
	if (power == 0) 
		return (1);
	else if (power < 0) 
		return (0);
	
	while (--power > 0) 
		sum *= nb;

	return (sum);
}
