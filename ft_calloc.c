/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:54:24 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/29 13:17:49 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if(nmemb > SIZE_MAX / size)
		return NULL;
	ptr = malloc(nmemb * size);
	if(!ptr)
		return NULL;
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
