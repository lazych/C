/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:11:14 by recherra          #+#    #+#             */
/*   Updated: 2023/09/20 16:17:58 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && n) 
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	while (n)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
/* int main()
{
	char	src[] = "jack";
	char	dest[20] = "test";
	unsigned int n = 2;

	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n", strncpy(dest, src, n));
} */
