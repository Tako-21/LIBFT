/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:51:16 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/05 17:37:20 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

static int ft_checkmaloc(char const *s, unsigned int start, size_t len)
{
	size_t smalloc;

	smalloc = 0;
	if (len >= ft_strlen((char *)s))
		smalloc = ft_strlen((char *)s);
	else if (start > ft_strlen((char *)s))
		smalloc = 0;
	else
		smalloc = len;
	return (smalloc);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;
	size_t smalloc;

	smalloc = ft_checkmaloc((char *)s, start, len);
	i = 0;
	p = malloc(sizeof(char) * (smalloc + 1));
	if (!p || !s)
		return (NULL);
	while (s[i] && len-- && ft_strlen((char *)s) >= start)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[start] = '\0';
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	// char	*s = malloc(sizeof(char) * (10 + 1));
	// s = "tripouille"a
	char * s = ft_substr("tripouille", 0, 42000);
	//char *p = ft_substr("tripouille", 0, 42000);
	// char *s = ft_substr("tripouille", 100, 1);
	printf("%s\n", s);
	free(s);
	// free(s);
}*/
