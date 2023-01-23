/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mek90mek@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:55:55 by mkocabas          #+#    #+#             */
/*   Updated: 2022/10/17 12:59:21 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 99)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}
