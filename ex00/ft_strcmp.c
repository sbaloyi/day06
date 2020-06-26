int	ft_strcmp(char *s1, char *s2)
{
	int counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0' && s1[counter] == s2[counter]) 
		counter++;
	return (s1[counter] - s2[counter]);
}
