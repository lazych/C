/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:25:14 by recherra          #+#    #+#             */
/*   Updated: 2023/09/25 19:52:39 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && --n)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	is_diff;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			is_diff = ft_strncmp(str + i, to_find, ft_strlen(to_find));
			if (is_diff == 0)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
