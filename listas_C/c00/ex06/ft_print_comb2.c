	#include <unistd.h>

int	last_number (int a, int b, int c, int d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
		return (1);
	return (0);
}

void	digit_2(int a, int b)
{
	int	num_3;
	int	num_4;

	num_3 = a;
	num_4 = b + 1;
	while (num_3 <= '9')
	{
		while (num_4 <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &num_3, 1);
			write(1, &num_4, 1);
			if (last_number(a, b, num_3, num_4) == 0)
				write(1, ", ", 2);
			num_4++;
		}
		num_3++;
		num_4 = '0';
	}	
}

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = '0';
	while (num_1 <= '9')
	{
		num_2 = '0';
		while (num_2 <= '9')
		{
			digit_2(num_1, num_2);
			num_2++;
		}
		num_1++;
	}
}
