/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:18:58 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/23 19:30:12 by mmeguedm         ###   ########.fr       */
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

char	*ft_strrchr(const char *str, int searchedChar )
{
	int	i;

	i = ft_strlen((char *)str);
	if (str == NULL)
		return (NULL);
	while (i > 0)
	{
		if (str[i] == searchedChar)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char	*s = "BeautWiful World";

// 	printf("%s\n", ft_strrchr(s, 'W'));
// }
