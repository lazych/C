/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:51:30 by recherra          #+#    #+#             */
/*   Updated: 2023/09/22 09:35:00 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*fill_arr(char *arr, unsigned int size)
{
	unsigned int	i;
	char			alpha;

	i = 0;
	alpha = 'a';
	while (i < size)
	{
		if (i < 10)
			arr[i] = i + 48;
		else
			arr[i] = alpha++;
		i++;
	}
	return (arr);
}

void	print(char a)
{
	char	arr[16];
	int		m;
	char	*filled;

	filled = fill_arr(arr, sizeof arr);
	if (a / 16 == 0) 
	{
		m = a % 16;
		write(1, "0", 1);
		write(1, &filled[m], 1);
	}
	else
	{
		m = a / 16;
		write(1, &filled[m], 1);
		m = a % 16;
		write(1, &filled[m], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31))
		{
			write(1, "\\", 1);
			print(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*  int	main()
{
	char str[] = "Coucou\a vas bien ";
	char str1[] = "Coucou\b vas bien ";
	char str2[] = "Coucou\t vas bien ";
	char str3[] = "Coucou\n vas bien ";
	char str4[] = "Coucou\v vas bien ";
	char str5[] = "Coucou\f vas bien ";
	char str6[] = "Coucou\r vas bien ";
	char str7[] = "Coucou\e vas bien ";
	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");
	ft_putstr_non_printable(str3);
	printf("\n");
	ft_putstr_non_printable(str4);
	printf("\n");
	ft_putstr_non_printable(str5);
	printf("\n");
	ft_putstr_non_printable(str6);
	printf("\n");
	ft_putstr_non_printable(str7);
} */
