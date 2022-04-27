/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:44:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/23 18:49:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((char *) src) < ((char *) dest))
	{
		while (n--)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (n--)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// #include <string.h>
// int main(void)
// {
// 	char	s[] = "abcdef";
// 	char	s1[] = "abcdef";

// 	ft_memmove(s, s+1, 4);
// 	printf("%s\n", s);

// 	memmove(s1, s1+1, 4);
// 	printf("%s\n", s1);

// }
