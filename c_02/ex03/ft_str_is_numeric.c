int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 57 && str[i] >= 48))
			c = 0;
		i++;
	}
	return (c);
}
