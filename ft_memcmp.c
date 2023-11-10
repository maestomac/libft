/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:43:47 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/10 12:43:47 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
            return (-1);
		if(((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_memcmp("abcdf", "abcdzf", 6));
    printf("%d\n", memcmp("abcdf", "abcdzf", 6));
}