/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:06:35 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/24 18:24:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size )
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	s1 = (char *)pointer1;
	s2 = (char *)pointer2;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && size--)
		i++;
	return (s1[i] - s2[i]);
}

// #include <string.h>

// int main(void)
// {
// 	char	*s1 = "Beautiful World";
// 	char	*s2 = "Beautiful Korld";

// 	printf("memcmp    : %d\n", memcmp(s1, s2, 15));
// 	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, 15));
// }
