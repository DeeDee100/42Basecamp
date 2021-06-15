int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((65 <= str[i]) && (str[i] <= 90)))
		{
			i++;
		}
		else if (((97 <= str[i]) && (str[i] <= 122)))
			i++;
		else
			return (0);
	}
	return (1);
}
