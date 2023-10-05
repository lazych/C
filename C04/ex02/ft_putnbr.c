/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:14:34 by recherra          #+#    #+#             */
/*   Updated: 2023/09/27 18:15:14 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i <= 9)
		ft_putchar(i + 48);
	else
	{
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + 48);
	}
}
