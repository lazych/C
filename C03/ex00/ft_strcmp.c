/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:43:52 by recherra          #+#    #+#             */
/*   Updated: 2023/09/25 19:51:36 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int	main (void)
{
	char s1[] = "hello j";
	char s2[] = "hellx j";

	printf("mine ==> %d\n", ft_strcmp(s1, s2));
	printf("original ==> %d\n", strcmp(s1, s2));
} */
