#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_atoi(const char *nptr);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
size_t strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
void bzero(void *s, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif