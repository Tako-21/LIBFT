/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:51:16 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/27 09:16:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * (len + 1));
	while (s[i] && len--)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[start] = '\0';
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s = "abcdef";
// 	char	*p = ft_substr(s, 3, 2);
// 	printf("%s\n", p);
// }
