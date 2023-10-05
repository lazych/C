/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:43:26 by recherra          #+#    #+#             */
/*   Updated: 2023/10/04 20:21:24 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(int size, char **strs, char *sep)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	i = 0;
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	int		len;
	char	*str;

	i = 0;
	k = 0;
	len = ft_len(size, strs, sep);
	str = malloc(len + 1);
	if (!str)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
