int	ft_atoi(char *str)
{
	int	a;
	int	i;
	int	res;

	a = 1;
	i = 0;
	res = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (str[i] - '0') + res * 10;
		i++;
	}
	res = res * a;
	return (res);
}
