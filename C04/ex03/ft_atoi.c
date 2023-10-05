/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:01:48 by recherra          #+#    #+#             */
/*   Updated: 2023/09/26 19:46:29 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + str[i] - '0';
		i++;
	}
	if (sign % 2 == 0)
		return (number);
	return (number * -1);
}
/*int	main(void)
{
	char str[] = "-54321";
	printf("%d\n", ft_atoi(str));
	return 0;
} */

/*int	main(int ac, char **av)
{
	(void)ac;

	printf("input ==> %s\n", av[1]);
	printf("output ==> %d\n", ft_atoi(av[1]));
}*/
