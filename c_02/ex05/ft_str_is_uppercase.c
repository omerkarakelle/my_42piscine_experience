int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 90 && str[i] >= 65))
			c = 0;
		i++;
	}
	return (c);
}
