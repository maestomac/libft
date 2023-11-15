/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:49:38 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/15 18:33:11 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1)); //renvoi tt
	start = 0;
	end = ft_strlen(s1); // initialise end a la fin
	while (char_in_set(s1[start], set) == 0)
		start++; // tant qu'on ne rencontre pas un char de set
	if (start == ft_strlen(s1)) // que des char de set
	{
		result = ft_strdup(""); // malloc de vide
		if (!result)
			return (NULL);
		else
			return (result);
	}
	while (char_in_set(s1[end - 1], set) == 0)
		end--; // tant qu'on ne rencontre pas un char de set
	result = ft_substr(s1, start, end - start);// on ecrit la diff entre end et start
	return (result);
}

int main()
{
	printf(("%s\n"), ft_strtrim("abbcouibca", "abc"));
}