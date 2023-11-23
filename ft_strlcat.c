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
# include <bsd/string.h>


size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_size;

    dst_size = ft_strlen(dst);
	if (dst_size < size)
	{
		ft_strlcpy(dst + dst_size, src, size - dst_size);
		return (dst_size + ft_strlen(src));
	}
    return (size + ft_strlen(src));
}