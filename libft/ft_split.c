/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:15:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/02 13:08:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	nb_words(char const *s, char c)
{
	int	nb_words;
	int	check_word;

	check_word = 1;
	nb_words = 0;
	while (*s)
	{
		if (*s != c && check_word)
		{
			nb_words++;
			check_word = 0;
		}
		else if (*s == c)
			check_word = 1;
		s++;
	}
	return (nb_words);
}

char	*ft_strlcpy(char *src, size_t endWord, size_t nbchar)
{
	size_t	i;
	int		begin;
	char	*word;

	begin = (endWord - nbchar);
	i = 0;
	word = malloc(sizeof(char) * (nbchar + 1));
	printf("endWord : %ld\nnbchar : %ld\n", endWord, nbchar);
	if (!word)
		return (NULL);
	if (src[begin] == '.')
		begin ++;
	printf("nbchar : %ld\nbegin : %d\n", nbchar, begin);
	while (src[begin] && i < nbchar)
	{
		printf("src : %c\n", src[begin]);
		word[i++] = src[begin++];
	}
	printf("word : %s\n", word);
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		nbchar;
	int		index;

	index = 0;
	nbchar = 0;
	i = 0;
	split = malloc(sizeof(char) * nb_words(s, c) + 1);
	if (!s || !split)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		if (s[i] != c)
			nbchar++;
		if ((s[i] == c || i == ft_strlen((char *)s) - 1) && nbchar > 0)
		{
			printf("test");
			split[index++] = ft_strlcpy((char *)s, i, nbchar);
			nbchar = 0;
		}
		i++;
	}
	split[index] = NULL;
	return (split);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		printf("nombre d'arguments invalides\n");
		return (EXIT_FAILURE);
	}

	char	**str;
	str = ft_split(argv[1], '.');

	while (str[i])
		printf("%s\n", str[i++]);
}
