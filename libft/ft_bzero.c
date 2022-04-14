/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:22:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/14 18:35:36 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// // int	main(void)
// // {
// // 	char	*s1 = "\0";
// // 	char	*s2 = "Cette phrase n'existera bientot plus...";

// // 	printf("string1 before ft_bzero : %s\n", s1);
// // 	// ft_bzero(s1, 2);
// // 	// printf("string1 after ft_bzero  : %s\n", s1);

// // 	printf("string2 before bzero : %s\n", s1);
// // 	bzero(s2, 2);
// // 	printf("string2 after bzero  : %s\n", s1);

// // }
