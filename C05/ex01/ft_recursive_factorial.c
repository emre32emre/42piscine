/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mek90mek@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:32:57 by mkocabas          #+#    #+#             */
/*   Updated: 2022/10/27 13:18:49 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb <= -1)
		return (0);
	if (nb <= 1)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
