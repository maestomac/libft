/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:36 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:36 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char a;
    char *str;

    a = c;
    str = s;
    i = 0;
    while (i < n)
    {
        str[i] = a;
        i++;
    }
    return (str);
}
