char	*ft_strstr(char *str, char *to_find)
{
	char	*new;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		new = str;
		find = to_find;
		while (*new == *find && *find != '\0')
		{
			new++;
			find++;
		}
		if (*find == '\0')
			return (str);
		str++;
	}
	return (0);
}
