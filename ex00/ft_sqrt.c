int	ft_sqrt(int nb)
{
    int counter = 0;
    while (counter < nb)
    {
        if (counter * counter == nb)
            return (counter);
        counter++;
    }
    return (0);
}
