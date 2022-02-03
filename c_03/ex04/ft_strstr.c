char	*ft_strstr(char *str, char *to_find)
{
	int		control;
	int		c;
	int		i;

	i = 0;
	if (*(to_find) == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		control = 1;
		while (to_find[c] != '\0' && control != 0)
		{
			if (str[i + c] != to_find[c])
				control = 0;
			c++;
		}
		if (control == 1)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
