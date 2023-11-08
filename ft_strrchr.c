/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:45:07 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:45:07 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int taille;

    taille = ft_strlen(s);
    i = taille - 1;
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}

int main()
{
    printf("%s\n", ft_strrchr("hjabdguiabc", ' '));
    printf("%s\n", strrchr("hjabdguiabc", ' '));
}