/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:43:05 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/14 14:43:05 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    char *result;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        (*f)(i, s);
        i++;
    }
}

void fuk_a(unsigned int i, char *s)
{
	if (s[i] != 'a')
    	printf("%c", s[i]);
}

void print_letters(unsigned int i, char *s)
{
    printf("%c", s[i]);
}

int main()
{
	ft_striteri("1 : abc\n\n", (*print_letters));
	ft_striteri("2 : abcaaaaaaaaaaa\n", (*fuk_a));
	return (0);
}