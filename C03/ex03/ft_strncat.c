/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:56:39 by recherra          #+#    #+#             */
/*   Updated: 2023/09/25 19:52:27 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	j;
	int	end;

	j = 0;
	end = 0;
	while (dest[end])
		end++;
	while (src[j] && nb--)
		dest[end++] = src[j++];
	dest[end] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "hello";
	char dest[20] = "jack";
	char src2[] = "hello";
	char dest2[20] = "jack";
	unsigned int nb = 4;

	printf("original %s\n", strncat(dest, src, nb));
	printf("mine ==> %s\n", ft_strncat(dest2, src2, nb));

}*/
