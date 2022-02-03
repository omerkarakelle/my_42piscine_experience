int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 122 && str[i] >= 97))
			c = 0;
		i++;
	}
	return (c);
}
