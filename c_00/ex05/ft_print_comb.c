#include <unistd.h>

void	ft_print_it(char a, char b, char c)
{
	if (c > b && b > a)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(c == '9' && b == '8' && a == '7'))
			write(1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	i[3];

	i[0] = '0';
	while (i[0] <= '9')
	{
		i[1] = '0';
		while (i[1] <= '9')
		{
			i[2] = '0';
			while (i[2] <= '9')
			{
				ft_print_it(i[0], i[1], i[2]);
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
