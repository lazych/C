/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:34:54 by recherra          #+#    #+#             */
/*   Updated: 2023/09/25 19:51:54 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && --n)
		i++;
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char s1[] = "hell";
	char s2[] = "hel";
	unsigned int size = 4;

	printf("mine ==> %d\n", ft_strncmp(s1, s2, size));
	printf("original ==> %d\n", strncmp(s1, s2, size));
}*/
