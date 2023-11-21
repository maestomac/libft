/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:38 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/21 14:54:00 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char *full;

	j = 0;
	i = 0;
	full = (char *)malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!full)
		return NULL;
	while (s1[i])
	{
		full[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		full[i + j] = s2[j];
		j++;
	}
	full[i + j] = '\0';
	return (full);
}
