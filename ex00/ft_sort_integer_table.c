void swap(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_integer_table(int *tab, int size) {
	
	int counter = 0;
	int counter1;

	while (counter < size) {
		counter1 = counter;
		while (counter1 < size) {
			if(tab[counter] >= tab[counter1]) {
				swap(&tab[counter], &tab[counter1]);
			}
			++counter1;
		}
		++counter;
	}
}
