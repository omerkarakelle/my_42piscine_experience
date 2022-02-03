#include"ft_func.h"

void	ft_main2(int argc, char **argv, char *str, char *ret_val)
{
	char	*nbr;

	if (argc == 2 || argc == 3)
	{
		if (argc == 2)
			str = ft_dict_read("numbers.dict.txt");
		else
			str = ft_dict_read(argv[1]);
		nbr = ft_delspandzero(argv[argc - 1]);
		if (!ft_isvalid(nbr))
		{
			ft_str("Error");
			return ;
		}
		else if (nbr[0] == '0')
			ft_str(ft_dict_find(str, nbr));
		ft_putnumber(str, nbr, ret_val, 1);
	}
	else
		ft_str("Error");
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	*ret_val;

	ret_val = (char *)malloc(10000);
	ft_main2(argc, argv, str, ret_val);
	if (*ret_val != 2)
		ft_str(ret_val);
	else
		ft_str("Dict Error");
	ft_str("\n");
	free(ret_val);
}
