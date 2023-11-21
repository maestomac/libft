/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:54:24 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/21 15:04:27 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t len;
	void *ptr;

	len = 0;
	i = 0;
	ptr = (void *) malloc(nmemb * sizeof(size));
	if(!ptr)
		return NULL;
	while (i < len)
	{
		((char *)ptr)[i]= 0;
		i++;
	}
	return (ptr);
}
