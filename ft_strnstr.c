/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:52:45 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/23 20:58:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
    size_t j;

    i = 0;
    if (little[0] == '\0' || !big)
        return ((char *)big);
    while (big[i] && i < len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (big[i + j] == little[j] && (i + j) < len)
            {
                if (little[j + 1] == '\0')
                       return ((char *)&big[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}
