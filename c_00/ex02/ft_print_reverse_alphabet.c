#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	cursor;

	cursor = 'z';
	while (cursor >= 'a')
	{
		ft_putchar(cursor);
		cursor--;
	}
}
