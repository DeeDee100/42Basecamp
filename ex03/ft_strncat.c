char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	int					a;
	unsigned int		n;
	char				*new;

	new = dest;
	n = 0;
	i = 0;
	a = 0;
	while (new[i])
		i++;
	while (src[a] && n < nb)
	{
		new[i] = src[a];
		a++;
		i++;
		n++;
	}
	new[i] = '\0';
	return (new);
}
