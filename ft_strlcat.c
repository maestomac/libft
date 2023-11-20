/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:46 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:46 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
	size_t j;
    size_t taille;

    taille = ft_strlen(src) + ft_strlen(dst);
    i = 0;
	j = ft_strlen(dst);
	if (!src || !dst)
		return (0);
    if (taille > size || size == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size)
    {
        dst[j + i] = src[i];
		printf("taille = %lu|%lu\n", ft_strlen(dst) + i, i);
		i++;
    }
	dst[j + i] = '\0';
    return (ft_strlen(dst));
}

int main()
{
	char dest[10] = "oui";
	printf("%zu\n", ft_strlcat(dest,"non", 6));
	printf("%s\n", dest);
}