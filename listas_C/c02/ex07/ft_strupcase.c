char	*ft_strupcase(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else if ((str[i] >= 97) && (str[i] <= 122))
		{
			a = (str[i] - 32);
			str[i] = a;
			i++;
		}
	}
	return (str);
}
