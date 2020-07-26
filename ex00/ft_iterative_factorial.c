int ft_iterative_factorial(int nb) 
{ 
	int sum = 1;

    if (nb == 1) 
		return (sum);
	else if (nb < 0) 
		return (0);

    while (nb > 1)
    {
        sum *= nb;
        nb--;
    }
    return (sum);
}
