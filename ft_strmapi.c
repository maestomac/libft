#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *result;

    i = 0;
    result = (char *)malloc (sizeof(char) * (ft_strlen(s) + 1));
    if (!result || !s || !f)
        return NULL;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}

char f(unsigned int i, char c)
{
    char str;
    str = c + 1;
    return (str);
}

int main()
{
    char str1[] = "abc";
    char* str2;
    str2 = ft_strmapi(str1, *f);
    printf("%s\n", str2);
}