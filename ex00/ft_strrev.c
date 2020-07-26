void *ft_strrev(char *str) {

	int str_length = 0;
	int counter = 0;
	char temp;
	int arrValue = 0;

	if(str) {
		while (str[str_length] != '\0') {
			str_length++;
		}
		while (counter < str_length / 2) {
			arrValue = str_length - counter - 1;
			temp = str[counter];
 			str[counter] = str[arrValue];
			str[arrValue] = temp;
			++counter;
		}
	}
	return str;
}
