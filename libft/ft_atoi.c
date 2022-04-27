/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:43:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/26 13:47:20 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] > '0' && str[i] < '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		return (-res);
	return (res);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 	{
// 		printf("Nombre d'arguments invalide");
// 		return (0);
// 	}
// 	printf("%d\n", atoi(argv[1]));
// 	printf("%d\n", ft_atoi(argv[1]));

// }
