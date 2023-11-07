#include <stdio.h>
#include <string.h>

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

int main()
{
    printf("%s\n", ft_strchr("hjdguiabc", 9));
    printf("%s\n", strchr("hjdguiabc", 9));
}