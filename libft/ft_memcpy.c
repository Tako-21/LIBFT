/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:18:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/18 17:53:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict destination,
const void *restrict source, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *)destination)[i] = ((char *)source)[i];
		i++;
	}
	return (destination);
}

// #include <stdlib.h>
// #include <string.h>
// #include <strings.h>

// int main(void)
// {
// 	printf("WITH ORIGINAL FUNCTION\n");
//     int array [] = { 54, 85, 20, 63, 21 };
//     int *copy = NULL;
//     int length = sizeof( int ) * 5;

//     /* Memory allocation and copy */
//     copy = malloc( length );
//     memcpy( copy, array, length );

//     /* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d ", copy[ length ]);
//     }
//     printf( "\n" );

// 	printf("WITH MY FUNCTION\n");

// 	//bzero(copy, 17); // VERIFY WITH YOUR OWN FUNCTION.
// 	int *copy2 = NULL;
// 	copy2 = malloc(20);
// 	ft_memcpy(copy2, array, 20);

// 	/* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d ", copy2[ length ] );
//     }
// }
