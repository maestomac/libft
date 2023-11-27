/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:50:53 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/15 17:50:53 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)

{
    size_t i;
    size_t j;
    char *new_s;

    i = 0;
    j = 0;
    if (!s)
        return NULL;
    if (start < ft_strlen(s))
        while (j < len && s[start + j] != '\0')
            j++;
    new_s = malloc(sizeof(char) * j  + 1);
    if (!new_s)
        return NULL;
    while (i < j)
    {
        new_s[i] = s[start + i];
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}

