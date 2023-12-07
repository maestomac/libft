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

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == c % 256)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == c % 256)
		return ((char *)s);
	return (NULL);
}

// int main()
// {
// 	char s[] = "tripouille";
// 	if (ft_strrchr(s, 0) == s + strlen(s))
// 		printf("%s\n", ft_strrchr(s, 0));
// 	else
// 		printf("ici\n");
// }