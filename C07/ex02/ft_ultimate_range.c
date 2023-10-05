/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:37:17 by recherra          #+#    #+#             */
/*   Updated: 2023/10/04 14:42:21 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*tab;

	i = 0;
	diff = max - min;
	tab = malloc(sizeof (int) * diff);
	*range = tab;
	if (diff <= 0)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (diff);
}
/*int main()
{
	int *v;
	int max = 2;
	int min = -2;
	int diff = max - min;

	printf("%d\n", ft_ultimate_range(&v, -2, 2));
	for(int i = 0; i < diff; i++)
		printf("%d ", v[i]);
}*/
