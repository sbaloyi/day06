#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(char *a, char *b)
{
	char temp;
	if (a && b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

int ft_strcmp(char *a, char *b)
{
    while (*a && *a == *b)
    {
        a++;
        b++;
    }
    return (*a - *b);       
}

int main(int argc, char **argv) {

	int j = 1, i = 0;

	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			ft_swap(argv[j], argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}

	j = 1;
	while (j < argc)
	{

		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
