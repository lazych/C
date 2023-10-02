/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:41:31 by recherra          #+#    #+#             */
/*   Updated: 2023/10/02 10:00:20 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n <= nb / 2)
	{
		if (nb == ft_recursive_power(n, 2))
			return (n);
		n++;
	}
	return (0);
}
