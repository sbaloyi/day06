int ft_strlen(char *str) {
	
	int counter = 0;
	
	while (*str != '\0') {
		++counter;
		++str;
	}
	return counter;
}
