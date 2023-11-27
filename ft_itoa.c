/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:43:55 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/14 14:43:55 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char    *equal_zero(char *str)
{
    str[0] = '0';
    return (str);
}

static int    get_nbrlen(int nbr)
{
    int    i;

    i = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
        i++;
    while (nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    int        len;
    long    nbr;

    nbr = n;
    len = get_nbrlen(nbr);
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len--] = '\0';
    if (n == 0)
        return (equal_zero(str));
    if (nbr < 0)
    {
        nbr *= (-1);
        str[0] = '-';
    }
    while (nbr > 0)
    {
        str[len--] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return (str);
}