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
			if ((b == 0 || b == (y - 1)) && (a == 0 || a == (x - 1)))
				ft_putchar('o');
			else if ((b == 0 || b == (y - 1)) && !(a == 0 || a == (x - 1)))
				ft_putchar('-');
			else if (a == 0 || a == (x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
