void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			if ((a == 0 && b == 0))
				ft_putchar('A');
			else if ((a == (x - 1) && b == 0) || (a == 0 && b == y - 1))
				ft_putchar('C');
			else if (a == x - 1 && b == y - 1)
				ft_putchar('A');
			else if (!(a == 0 || a == (x - 1) || b == (y - 1) || b == 0))
				ft_putchar(' ');
			else
				ft_putchar('B');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
