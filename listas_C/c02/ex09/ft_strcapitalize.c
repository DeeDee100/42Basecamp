char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (str[i])
	{
		if ((b == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			b++;
		}
		else if ((b > 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			b = 0;
		else
			b++;
		i++;
	}
	return (str);
}
