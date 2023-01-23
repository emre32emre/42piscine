#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	whitespace_or_sign(char *str, int *ptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr = i;
	return (sign);
}
int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i] != '\0')
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}
int	convert(char *str, int i, char *base)
{
	int	res;
	int	base_len;

	res = 0;
	base_len = ft_strlen(base);
	while (str[i])
	{
		if (base_index(str[i], base) == -1)
			break ;
		res = (res * base_len) + base_index(str[i], base);
		i++;
	}
	return (res);
}
int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	i;
	int	error;

	
	result = 0;
	error = checkerror(base);
	sign = whitespace_or_sign (str, &i);
	if (str[i] && (str[i] >= 48 && str[i] <= 57))
		result = convert(str, i, base);	
	result *= sign;
	return (result);
}



int		main(void)
{
	//printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("sayı = %d\n",101010);
	printf("%d\n", ft_atoi_base("101010264501", "01"));
	//printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}