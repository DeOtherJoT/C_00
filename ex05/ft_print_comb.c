#include <unistd.h>

void	printComb(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = '1';
		while (y <= '8')
		{
			z = '2';
			while (z <= '9')
			{
				if ((z > y) && (y > x))
				{
					printComb(x, y, z);
				}
				++z;
			}
			++y;
		}
		++x;
	}
}

void	printComb(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x == '7' && y =='8')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}
