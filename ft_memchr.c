/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:36:42 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 17:59:07 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(((unsigned char *)s)[i] != '\0' && i < n)
	{
		if(((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return 0;
}
int main()
{
	unsigned char s[10] = "bonjour";
	printf("%s\n", ft_memchr(s, 'j', 10));
	printf("%s\n", memchr(s, 'j', 10));
}