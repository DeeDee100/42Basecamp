int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((65 <= str[i]) && (str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
