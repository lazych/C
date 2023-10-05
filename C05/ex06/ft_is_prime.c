/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:11:51 by recherra          #+#    #+#             */
/*   Updated: 2023/10/02 15:58:07 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_is_prime(atoi(av[1])));
}*/
