#include <unistd.h>

void	ft_print(char c);

void	combPrint(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if (b > a)
			{
				combPrint(a, b);
			}
			++b;
		}
		++a;
	}
}

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	combPrint(int a, int b)
{
	ft_print(48 + a / 10);
	ft_print(48 + a % 10);
	ft_print(' ');
	ft_print(48 + b / 10);
	ft_print(48 + b % 10);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}
