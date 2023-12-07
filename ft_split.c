/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:43:44 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/14 14:43:44 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(const char *str, char sep)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			result++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (result);
}

static	size_t	count_word_len(const char *str, char sep, size_t n_w
, size_t *word_len)
{
	size_t	i;
	size_t	j;

	i = n_w;
	while (str[i] && str[i] == sep)
		i++;
	j = i;
	while (str[i] && str[i] != sep)
		i++;
	*word_len = i - j;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_len;
	size_t	next_word;
	char	**tab;

	i = 0;
	next_word = 0;
	word_len = 0;
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (i < count_words(s, c))
	{
		next_word = count_word_len(s, c, next_word, &word_len);
		tab[i] = malloc(sizeof(char) * (word_len + 1));
		if (!tab[i])
		{
			while (*tab)
				free(*tab++);
			return (free(tab), NULL);
		}
		ft_strlcpy(tab[i++], &s[next_word - word_len], word_len + 1);
	}
	tab[i] = NULL;
	return (tab);
}
