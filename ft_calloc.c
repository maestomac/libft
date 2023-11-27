/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:54:24 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/27 18:34:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if(nmemb > SIZE_MAX / size)
		return NULL;
	ptr = malloc(nmemb * size);
	if(!ptr)
		return NULL;
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
