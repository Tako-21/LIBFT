/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:41:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/05 12:18:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght_dest;

	lenght_dest = ft_strlen(dest);
	j = 0;
	i = 0;
	if (size == 0 || ft_strlen(dest) >= size)
		return (size + ft_strlen(src));
	while (dest[i])
		i++;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + lenght_dest);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int    main()
// {
//     char string[1] = "h";
//     char s[] = "eys";

//     printf("real : %li\n", strlcat(string, s, 10));

//     char dtring[1] = "h";
//     char d[] = "eys";
//     printf("stan : %i\n", ft_strlcat(dtring, d, 10));
// }
