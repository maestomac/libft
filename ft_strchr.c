/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:41 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:41 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if(((unsigned char *)s)[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i++;
    }
	if(((unsigned char *)s)[i] == (unsigned char)c)
        return ((char *)&s[i]);
    return (NULL);
}
