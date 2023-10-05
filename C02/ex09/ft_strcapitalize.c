/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:05:51 by recherra          #+#    #+#             */
/*   Updated: 2023/09/21 21:22:48 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		if ((str[i] == '\n' || str[i] == '\t'
				|| (str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123 && str[i] <= 126))
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "dvbdhbv \rgnjnhojngjn";
	
	printf("%s", ft_strcapitalize(str));
}*/
