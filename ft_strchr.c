/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:41 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/08 11:44:41 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (c == s[i])
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     printf("%s\n", ft_strchr("hjdguiabc", 9));
//     printf("%s\n", strchr("hjdguiabc", 9));
// }