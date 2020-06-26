#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int counter = 0;
	while(argv[0][counter] != '\0')
	{
		ft_putchar(av[0][counter]);
		counter++;
	}
	ft_putchar('\n');
	return 0;
}
