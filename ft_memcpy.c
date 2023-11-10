/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:30 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:30 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++; 
    }
    return (dest);
}

int main()
{
    char dest[0];
    printf("%d\n", ft_memcpy(dest, "abc", 1));
    printf("%d\n", memcpy(dest, "abc", 1));
}