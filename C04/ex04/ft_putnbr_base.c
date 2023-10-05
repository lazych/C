/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:25:15 by recherra          #+#    #+#             */
/*   Updated: 2023/09/27 18:17:30 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	is_repeated(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	print_n(int nbr, int base_value, char *base)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= base_value)
		print_n(n / base_value, base_value, base);
	write(1, &base[n % base_value], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	valid;
	int	repeated;
	int	base_value;

	valid = is_valid(base);
	repeated = is_repeated(base);
	if (valid == 0 || repeated == 0)
		return ;
	base_value = ft_strlen(base);
	print_n(nbr, base_value, base);
}
/*int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	
	int num = atoi(av[1]);

	ft_putnbr_base(num, av[2]);
	return 0;
}*/

/*int	main(void)
{
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	return (0);
}*/
