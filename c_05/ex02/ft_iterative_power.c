int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	a = 1;
	while (power > 0)
	{
		a *= nb;
		power--;
	}
	return (a);
}
