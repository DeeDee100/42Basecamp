#include <unistd.h>

int	last_line(int a, int b, int c)
{
	if (a == '7' && b == '8' && c == '9')
		return (1);
	return (0);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (last_line(first, second, third) == 0)
					write(1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}
