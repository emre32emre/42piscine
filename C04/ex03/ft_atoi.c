/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mek90mek@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:21:21 by mkocabas          #+#    #+#             */
/*   Updated: 2022/10/26 09:39:44 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespace_or_sign (str, &i);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result *= 10;
		result = (str[i] - 48) + result;
		i++;
	}
	result *= sign;
	return (result);
}
