/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mek90mek@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:32:31 by mkocabas          #+#    #+#             */
/*   Updated: 2022/10/27 13:17:19 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb <= -1)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb)
	{
		res *= nb;
		nb -= 1;
	}
	return (res);
}
