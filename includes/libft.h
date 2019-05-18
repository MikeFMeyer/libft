#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
char *ft_strcat(char *dest, const char *src);
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *dest, char *src);
size_t ft_strlen(char *str);
char *ft_strdup(char *src);
char *ft_strrev(char *str);
void ft_swap(int *a, int *b);
int ft_tolower(int ch);
int ft_toupper(int ch);
char *ft_strstr(char const *haystack, char const *needle);
int ft_isalnum(int ch);
int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isprint(int c);
char *ft_strchr(const char *str, int c);
char *ft_strncat(char *dest, const char *src, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *str1, const void *str2, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);

#endif