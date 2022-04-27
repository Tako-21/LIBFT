/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:28:16 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/26 12:39:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] && n--)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && s1[i] == s2[j] && n--)
			{
				if (s2[j + 1] == '\0')
					return ((char *)(s1 + i - j));
				i++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char *s1 = "cocoriricoricocoricorico";
// 	char *s2 = "cocorico";
// 	int	lenght = ft_strlen(s1);

// 	printf("strstr     : %s\n", strstr(s1, s2));
// 	printf("ft_strnstr : %s\n", ft_strnstr(s1, s2, lenght));
// }
