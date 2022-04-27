/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:05:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/23 19:20:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *string, int searchedChar )
{
	int	i;

	i = 0;
	if (string == NULL)
		return (NULL);
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s = "Beautiful World";

// 	printf("%s\n", ft_strchr(s, 'W'));
// }
