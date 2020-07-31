#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int counter = 0;
	int counter1 = argc - 1;

	while(counter1 > 0)
	{
		while(argv[counter1][counter])
		{
			ft_putchar(argv[counter1][counter]);
			counter++;
		}
		counter1--;
		counter = 0;
		ft_putchar('\n');
	}
	return (0);
}
