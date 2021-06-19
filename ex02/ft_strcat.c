char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		a;
	char	*new;

	new = dest;
	i = 0;
	a = 0;
	while (new[i])
		i++;
	while (src[a])
	{
		new[i] = src[a];
		a++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
