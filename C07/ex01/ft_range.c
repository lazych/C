/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:20:05 by recherra          #+#    #+#             */
/*   Updated: 2023/10/04 14:20:56 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	tab = malloc(sizeof (int) * diff);
	if (diff <= 0)
		return (0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*int	main()
{
	int	diff;
	int	*tab;
	int min, max;
	
	min = -2;
	max = 2;
	diff = max - min;
	tab = ft_range(min, max);
	
	for (int i = 0; i < diff; i++)
		printf("%d ", tab[i]);
	printf("\n");
}*/
