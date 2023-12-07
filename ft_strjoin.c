/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:38 by maverqui          #+#    #+#             */
/*   Updated: 2023/12/07 19:47:39 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*full;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	full = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!full)
		return (NULL);
	while (s1[i])
	{
		full[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		full[i + j] = s2[j];
		j++;
	}
	full[i + j] = '\0';
	return (full);
}
