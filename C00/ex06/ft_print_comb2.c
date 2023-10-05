/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:19:02 by recherra          #+#    #+#             */
/*   Updated: 2023/09/16 21:46:43 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_n(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	arr[2];

	arr[0] = 0;
	while (arr[0] <= 98)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 99)
		{
			write_n(arr[0]);
			write(1, " ", 1);
			write_n(arr[1]);
			if (arr[0] != 98)
			{
				write(1, ", ", 2);
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
