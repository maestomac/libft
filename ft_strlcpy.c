#include "libft.h"


size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char dest[0];
    printf("%d\n", ft_strlcpy(dest, "abc", 0));
    printf("%d\n", strlcpy(dest, "abc", 0));
}