#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, str + i++, 1);
	write(1, "\n", 1);
}

int	main(int num, char **arg)
{
	if (num <= 0)
		return (0);
	ft_putstr(arg[0]);
	return (0);
}
