#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t i;
    char **result;

    i = 0;
    char **result = (char **)malloc(sizeof(char *) * (nombre_de_mots + 1));
    while (s[i])
    {
        if (i == c)
        {
            ;
        }
        i++;
    }
    return (s[i] + s2[i]);
}

int main()
{
    printf("%s\n", ft_split());
}