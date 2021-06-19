int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	else
	{
		while ((*s1 || *s2) && n > 0)
		{
			if (*s1 != *s2)
			{
				return ((unsigned char)*s1 - (unsigned char) *s2);
			}
			n--;
			s1++;
			s2++;
		}
	}
	return (0);
}
