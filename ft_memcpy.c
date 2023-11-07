#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    char *dest_char = (char *)dest;
    const char *src_char = (const char *)src;
    while (src_char[i] != '\0' && i < n)
    {
        dest_char[i] == src_char[i];
        i++; 
    }
    return (dest);
}
//je dois seg fault avec n < 0
#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char dest[0];
    printf("%d\n", ft_memcpy(dest, "abc", -1));
    printf("%d\n", memcpy(dest, "abc", -1));
}