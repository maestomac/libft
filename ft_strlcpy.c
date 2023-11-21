/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:51 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:51 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
	if (size == 0)
        return (ft_strlen(src));
	if (!src || !dst)
		return (0);
    while (src[i] != '\0' && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
/*
#include <bsd/string.h>

int main()
{
	char dest[10]; memset(dest, 'A', 10);
	char src[] = "coucou";
	char dest2[10]; memset(dest2, 'A', 10);
	char src2[] = "coucou";
	printf("%zu\n", (ft_strlcpy(dest, src, 1)));
	printf("%zu\n", (ft_strlen(src)));
	printf("%s %s\n", src, dest);
	// printf("%s\n", src2, dest2)
	//printf("%zu\n", (strlcpy(dest2, src2, 1)));
}
*/
