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

static size_t ft_count_word(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (!s)
		return 0;
	if(!c)
		return 1;
	while (s[i])
	{
		if(s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++; //si les occurences se suivent
	}
	return (count);
}

static size_t ft_next_word(char const *s, size_t index, char c)
{
	while (s[index] == c && s[index] != '\0')
		index++;
	return (index);
}

static size_t ft_word_len(char const *s, size_t index, char c)
{
	while (s[index] != c && s[index] != '\0')
		index++;
	return (index);
}

char **ft_split(char const *s, char c)
{
    size_t index;
	size_t word_len;
	char **result; //pour ranger les mots dans un autre tab
	char *word;
	size_t i;

	i = 0;
	index = 0;
	word_len = 0;
	result = (char **) malloc(sizeof(char) * (ft_count_word(s, c) + 1));
	while (s[index])
	{
		word_len = ft_word_len(s, index, c);
		printf("len = %d\n", (int)word_len);
		word =(char *) malloc(sizeof(char) * word_len + 1);
		ft_strlcpy(word, s, (word_len + 1));
		word[word_len + 1] = '\0';
		index = ft_next_word(s, (word_len + 1), c);
		result[i] = word;
		i++;
	}
	return (result);
}

int main()
{
	// char **string;

	// string[0][0] = 'b';
	// string[0][1] = 'o';
	// string[0][2] = 'n';
	// string[0][3] = 'j';
	// string[0][4] = 'o';
	// string[0][5] = 'u';
	// string[0][6] = 'r';
	// string[0][7] = ' ';
	// string[0][8] = ' ';
	// string[0][9] = ' ';
	// string[0][10] = 'j';
	// string[0][11] = 'e';
	// string[0][12] = ' ';
	// string[0][13] = 's';
	// string[0][14] = 'u';
	// string[0][15] = 'i';
	// string[0][16] = 's';
	// string[0][17] = ' ';
	// string[0][18] = 'm';
	// string[0][19] = 'a';
	// string[0][20] = 'e';
	// printf("%s\n", ft_split(string, ' '));
	char **test = ft_split("bonjour      je suis mae", ' ');
	int i = 0;
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}

	// string[0][0] = 'b';
	// string[0][1] = 'o';
	// string[0][2] = 'n';
	// string[0][3] = 'j';
	// string[0][4] = 'o';
	// string[0][5] = 'u';
	// string[0][6] = 'r';
	// string[0][7] = '\0';
	// string[1][0] = 'j';
	// string[1][1] = 'e';
	// string[1][2] = '\0';
	// string[2][0] = 's';
	// string[2][1] = 'u';
	// string[2][2] = 'i';
	// string[2][3] = 's';
	// string[2][4] = '\0';
	// string[3][0] = 'm';
	// string[3][1] = 'a';
	// string[3][2] = 'e';
	// string[3][3] = '\0';
	// string[4][0] = '\0';
}
