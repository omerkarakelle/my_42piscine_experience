#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	cursor;

	cursor = '0';
	while (cursor <= '9' )
	{
		ft_putchar(cursor);
		cursor++;
	}
}
