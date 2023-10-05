/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:13:39 by recherra          #+#    #+#             */
/*   Updated: 2023/09/28 18:17:44 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	(void)ac;
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	str_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	diff;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			diff = ft_strcmp(av[i], av[j]);
			if (diff > 0)
				str_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	ft_print_params(ac, av);
	return (0);
}
