/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:54:24 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/10 15:09:27 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t len;
	void *ptr;

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
int main()
{
	char *test1;
	char *test2;
	test1 = malloc(5000000 *sizeof(char *));
	test2 = calloc(5000000, sizeof(char *));
	printf("{%s}\n", test1);
	printf("[%s]\n", test2);
}