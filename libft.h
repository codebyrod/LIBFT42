#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int n);
int ft_isalnum(int n);
int ft_isascii(int n);
int ft_isprint(int n);
int ft_strlen(char *str);
void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *str, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_lower(int n);
int ft_toupper(int n);
void *ft_memchr(const void *s, int c, size_t n);






#endif