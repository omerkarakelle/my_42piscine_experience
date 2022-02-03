int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s2[i] > s1[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
