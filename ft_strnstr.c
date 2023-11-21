/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:52:45 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/21 14:54:34 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if(little == NULL)
		return ((char *)big);
	if(big[0] == '\0')
		return NULL;
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		while(big[i + j] == little[j])
		{
			if (little[j + 1] == '\0' )
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return ((char *)big);
}
