/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:49:38 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/14 02:06:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *clean;
	char *end;

	i = 0;
	j = 0;
	while (end[i])
		end++;
	clean = (char *)malloc (sizeof(char) * ft_strlen(end - s1));//trouvertaille 
	if (!clean || !s1 || !set)
		return NULL;
	while (s1[i])
	{
		if (s1[i] == set[j])
			i++;
		j++;
	}
	while (s1[i])
	{
		clean[i] = s1[i];
		i++;
	}
	return (clean);
}

int main()
{
	printf(("%s\n"), ft_strtrim("osa cbodur", "ab d"));
}