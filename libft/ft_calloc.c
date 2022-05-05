/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:52:05 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/05 14:03:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//void	*ft_calloc(size_t elementCount, size_t elementSize)
void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*p;
	size_t	n;

	i = 0;
	n = (nmemb * size);
	if (n/nmemb != size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (n--)
		p[i++] = 0;
	return ((void *)p);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	*t = calloc(1, sizeof(int));
// 	int	i;

// 	i = 1;
// 	while (i--)
// 		printf("%d ", t[i]);
// 	printf("\n");
// }
