int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	i = nb;
	while (i > 0)
	{
		n *= i;
		i--;
	}
	return (n);
}
