/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:04:15 by recherra          #+#    #+#             */
/*   Updated: 2023/09/16 21:49:24 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	v[10];
	long	ln;
	int		i;

	i = 0;
	ln = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (ln < 0)
	{
		ln = ln * -1;
		write(1, "-", 1);
	}
	while (ln > 0)
	{
		v[i++] = (ln % 10) + '0';
		ln = ln / 10;
	}
	while (i > 0)
	{
		write(1, &v[--i], 1);
	}
}
