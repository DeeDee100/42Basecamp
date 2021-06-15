#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = size - 1;
	a = 0;
	while (a <= (i / 2))
	{
		temp = tab[a];
		tab[a] = tab[(i - a)];
		tab[(i - a)] = temp;
		a++;
	}
}
