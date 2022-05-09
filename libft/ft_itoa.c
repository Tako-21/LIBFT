/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:50:01 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/10 00:52:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	else if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = len(nb);
	str = malloc(sizeof(char) * i + 1);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = ft_itoa(0);
// 	// printf("%s\n", s);
// 	free(s);
// }
