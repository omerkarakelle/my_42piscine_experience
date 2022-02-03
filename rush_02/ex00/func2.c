#include"ft_func.h"

int	ft_isnumber(char c)
{
	return (c <= '9' && c >= '0');
}

char	*ft_dict_read(char *arg)
{
	char	*str;
	int		fl;
	int		i;

	str = malloc(15000);
	fl = open(arg, O_RDONLY);
	read(fl, str, 1);
	i = 1;
	while (str[i - 1])
		read(fl, str + i++, 1);
	close(fl);
	free(str);
	return (str);
}

char	*ft_dict_find(char *str, char *key)
{
	char	*value;
	char	*ret_val;
	int		i;
	int		j;

	j = 0;
	value = ft_strstr(str, key);
	if (value == 0)
		return (0);
	ret_val = malloc(1000);
	while (value[j] <= '9' && value[j] >= '0' && value[j])
		j++;
	while (value[j] == ' ' || value[j] == ':')
		j++;
	i = j;
	while (value[i] != '\n')
	{
		ret_val[i - j] = value[i];
		i++;
	}
	ret_val[i] = '\0';
	return (ret_val);
}
