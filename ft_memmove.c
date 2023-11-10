/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:43:59 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/10 13:27:16 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *temp;

	i = 0;
	temp = (unsigned char *)src;
	while(i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}

int main()
{
    char dest[10];
    printf("%d\n", ft_memmove(dest, "", 10));
    printf("%d\n", memmove(dest, "", 10));
}