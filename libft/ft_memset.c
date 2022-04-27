/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:24:57 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/23 18:42:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	if (pointer == NULL)
		return (NULL);
	while (((char *)pointer)[i] && i < count)
	{
		((char *)pointer)[i] = value;
		i++;
	}
	return (pointer);
}
	/*Transtypage de pointeur générique vers un pointeur de char*/

// int main(void)
// {
// 	int array[] = {54, 85, 20, 63, 21};
// 	int array2[] = {33, 25, 10, 93, 51};
// 	size_t size = sizeof( int ) * 5;
// 	int length;

// 	/* Display the initial values */
// 	for( length=0; length<5; length++) {
// 		printf( "%d ", array[ length ] );
// 	}
// 	printf("\n");

// 	/* Reset the memory bloc */
// 	memset( array, 1, size );

// 	/* Display the new values */
// 	for(length=0; length<5; length++) {
// 		printf("%d ", array[length]);
// 	}
// 	printf("\n");

// 	for( length=0; length<5; length++) {
// 		printf( "%d ", array2[ length ] );
// 	}
// 	printf("\n");

// 	ft_memset(array2, 1, size);
// 	for(length=0; length<5; length++) {
// 		printf("%d ", array2[length]);
// 	}
// 	printf("\n");

// 	printf("%p\n", memset( array2, 0, size ));
// 	printf("%p\n", ft_memset( array2, 0, size ));
// }
