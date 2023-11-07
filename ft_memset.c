void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char c;
    char *s;

    c = c;
    s = s;
    i = 0;
    while (i < n)
    {
        s[i] = c;
        i++;
    }
    return (s);
}

int main()
{
    char s[8];
    printf("%s\n", ft_memset(s, 7, 8));
    printf("%s\n", memset(s, 7, 8));
}