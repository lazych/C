/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:13:42 by recherra          #+#    #+#             */
/*   Updated: 2023/09/25 19:52:12 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	end;

	j = 0;
	end = 0;
	while (dest[end])
		end++;
	while (src[j])
		dest[end++] = src[j++];
	dest[end] = '\0';
	return (dest);
}
/*int	main()
{
	char src[] = "ja";
	char dest[19] = "hell";
	char src2[] = "ja";
	char dest2[19] = "hell";
	

	printf("mine ==> %s\n", ft_strcat(dest2, src2));
	printf("original ==> %s\n", strcat(dest, src));
}*/
