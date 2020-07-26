int compare(char *str, char *to_find)
{
    while (*str && *to_find)
    {
        if (*str != *to_find)
            return (0);
        str++;
        to_find++;
    }
    return (*to_find == '\0');
}

char *ft_strstr(char *str, char *to_find)
{
    while (*str != '\0')
    {
        if ((*str == *to_find) && compare(str, to_find))
            return (str);
        str++;
    }
    return (0);
}
