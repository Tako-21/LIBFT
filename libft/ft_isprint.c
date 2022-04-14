/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:57:00 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/01 13:34:55 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}

// #ifdef MAIN

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	for (i = '0'; i <= 255; i++)
// 	{
// 		if (ft_isprint(i) && isprint(i))
// 			printf("works'fine %c\n", i);
// 		else
// 			printf("error on %c\n", i);
// 	}
// }
// #endif
