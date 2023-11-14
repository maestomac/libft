/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:42:17 by maverqui          #+#    #+#             */
/*   Updated: 2023/11/14 14:42:17 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

int main()
{
    ft_putstr_fd("abc", 1);
}