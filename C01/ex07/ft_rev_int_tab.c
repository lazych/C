/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:17 by recherra          #+#    #+#             */
/*   Updated: 2023/09/18 14:57:42 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - j];
		tab[size - j] = tmp;
		i++;
		j++;
	}
}
