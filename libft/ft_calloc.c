/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:52:05 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/26 14:43:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int		i;
	char	*p;

	p = malloc(elementCount * elementSize);
	if (!p)
		return (NULL);
	i = 0;
	while (elementCount--)
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
