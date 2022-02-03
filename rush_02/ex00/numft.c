#include"ft_func.h"

char	*ft_delspandzero(char *str)
{
	int		i;
	int		j;
	char	*strcp;
	char	a;

	a = 'z';
	strcp = malloc(100);
	j = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '0')
	{
		a = '0';
		i++;
	}
	while (str[i])
		strcp[j++] = str[i++];
	if (*strcp == 0)
		*strcp = a;
	free(strcp);
	return (strcp);
}
