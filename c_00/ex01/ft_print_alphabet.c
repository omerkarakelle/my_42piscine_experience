#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	cursor;

	cursor = 'a';
	while (cursor <= 'z')
	{
		ft_putchar(cursor);
		cursor++;
	}
}
