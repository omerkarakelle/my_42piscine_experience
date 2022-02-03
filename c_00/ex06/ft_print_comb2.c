#include <unistd.h>

void	ft_print_it(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if ((a != '9' || b != '8' || c != '9' || d != '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a[4];
	char	b;
	int		i;

	a[0] = '0';
	a[1] = '0';
	a[2] = '0';
	a[3] = '0';
	while (!(a[0] == '9' && a[1] == '9' && a[2] == '9' && a[3] == '9'))
	{
		if ((a[0] < a[2] || (a[0] == a[2] && a[1] < a[3])))
			ft_print_it(a[0], a[1], a[2], a[3]);
		i = 3;
		b = (a[0] != '9' || a[1] != '9' || a[2] != '9' || a[3] != '9');
		while (i >= 0)
		{
			if (a[i] == '9' && b)
				a[i--] = '0';
			else
			{
				a[i]++;
				break ;
			}
		}
	}
}
