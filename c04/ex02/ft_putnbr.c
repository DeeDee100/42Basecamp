#include <unistd.h>

void	ft_putnbr(int nb)
{
	int				mod;
	unsigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			number = nb * -1;
		}
		else
			number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	mod = number % 10 + 48;
	write(1, &mod, 1);
}
