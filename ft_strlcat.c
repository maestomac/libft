#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t taille;

    taille = ft_strlen(src) + ft_strlen(dst);
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    if (taille > size)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size)
    {
        *dst = *src;
    }
    return (taille);
}