int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
			c = 0;
		i++;
	}
	return (c);
}
