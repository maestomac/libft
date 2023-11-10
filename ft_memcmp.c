/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:07:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/10 01:07:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return ((unsigned char *)s1 - (unsigned char *)s2);
        i++;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_memcmp("abcdf", "abgqqaegqe", 10));
    printf("%d\n", memcmp("abcdf", "abgqqaegqe", 10));
    //pas la bonne rep
}